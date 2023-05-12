#pragma once
#include"Buffer.h"
class Consumare
{
public:
	virtual void consuma_produs(Producere*) = 0;
};
class ConsumarePrimulProdus: public Consumare
{
	void consuma_produs(Producere*) override;
};
class ConsumareAlDoileaProdus : public Consumare
{
	void consuma_produs(Producere*) override;
};
class ConsumareAlTreileaProdus: public Consumare
{
public:
	void consuma_produs(Producere*) override;
};
