#include"Consumare.h"
#include<mutex>
#include<condition_variable>
#include<array>
FactoryProduse fabrica_produs;
Buffer buf;
std::mutex m;
std::mutex debloc;
std::condition_variable deblocare_consumator[3];
std::array<Consumare*, 3> consumatori = { new ConsumarePrimulProdus,new ConsumareAlDoileaProdus, new ConsumareAlTreileaProdus };
void creaza_produs(int x)
{
	while(true)
	{
		Producere* produsul = fabrica_produs.creaza_produs(x);
		m.lock();
		buf.push_produs(produsul);
		std::cout << buf.get_size(x)<<"\n";
		if(buf.get_size(x)>0)
		{
			deblocare_consumator[x].notify_one();
		}
		m.unlock();
	}
}
void consuma_produs(int x)
{
	std::unique_lock<std::mutex> mutex_temprar(debloc);
	while(true)
	{
		if(buf.get_size(x)<=0)
		{
			deblocare_consumator[x].wait(mutex_temprar);
		}
		Producere* produs = buf.pop_produs(x);
		consumatori[x]->consuma_produs(produs);
	}
}

int main()
{
	std::array<std::thread, 3> thread_producatori = { std::thread(creaza_produs,0),std::thread(creaza_produs,1),std::thread(creaza_produs,2) };
	std::thread ar(consuma_produs, 0);

	while(true)
	{
		std::this_thread::sleep_for(std::chrono::microseconds(500));
	}
}