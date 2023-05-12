#include"Producere.h"
Producere::Producere() 
{

};
Producere::~Producere() 
{

};
std::string Produsul1::get_denumire()
{
	return "Produsul " + this->name + "\n";
}
Producere* Produsul1::clone()
{
	return new Produsul1;
}
Produsul1::Produsul1()
{
	std::cout << "Se creaza primul produs \n";
	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	std::cout << "A fost creat primul produs\n";
}
Produsul1::~Produsul1()
{
	std::cout << "Se consuma primul produsul\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(1500));
	std::cout << "A fost consumat primul produsul\n";
}
std::string Produsul2::get_denumire()
{
	return "Produsul " + this->name + "\n";
}
Producere* Produsul2::clone()
{
	return new Produsul2;
}
Produsul2::Produsul2()
{
	std::cout << "Se creaza al doilea produs \n";
	std::this_thread::sleep_for(std::chrono::milliseconds(3400));
	std::cout << "A fost creat al doilea\n";
}
Produsul2::~Produsul2() 
{
	std::cout << "Se consuma al doilea produs\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	std::cout << "A fost consumat al doilea produs\n";
}
std::string Produsul3::get_denumire()
{
	return "Produsul " + this->name + "\n";
}
Producere* Produsul3::clone()
{
	return new Produsul3;
}
Produsul3::Produsul3()
{
	std::cout << "Se creaza al treilea produs\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(2200));
	std::cout << "A fost creat al treilea produs\n";
}
Produsul3::~Produsul3()
{
	std::cout << "Se consuma al treilea produs \n";
	std::this_thread::sleep_for(std::chrono::milliseconds(1500));
	std::cout << "A fost consumat al treilea\n";
}
Producere* FactoryProduse::creaza_produs(int i)
{
	if(i==0)
	{
		return new Produsul1;
	}
	if(i==1)
	{
		return new Produsul2;
	}
	if(i==2)
	{
		return new Produsul3;
	}
	return nullptr;
}
