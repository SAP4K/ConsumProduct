#include "Consumare.h"

void ConsumarePrimulProdus::consuma_produs(Producere* produsul_pentru_consumare)
{
	if (typeid(*produsul_pentru_consumare) == typeid(Produsul1)) 
	{
		delete produsul_pentru_consumare;
	}
	produsul_pentru_consumare = nullptr;
}
void ConsumareAlDoileaProdus::consuma_produs(Producere* produsul_pentru_consumare)
{
	if (typeid(*produsul_pentru_consumare) == typeid(Produsul2)) 
	{
		delete produsul_pentru_consumare;
	}
	produsul_pentru_consumare = nullptr;
}
void ConsumareAlTreileaProdus::consuma_produs(Producere* produsul_pentru_consumare)
{
	if (typeid(*produsul_pentru_consumare) == typeid(Produsul3))
	{
		delete produsul_pentru_consumare;
	}
	produsul_pentru_consumare = nullptr;
}
