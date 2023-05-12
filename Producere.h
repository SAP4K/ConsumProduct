#pragma once
#include<string>
#include<thread>
#include<chrono>
#include<iostream>
class Producere
{
public:
	Producere();
	virtual ~Producere() = 0;
	virtual std::string get_denumire() = 0;
	virtual Producere* clone() = 0;
protected:
	std::string name;
};
class Produsul1: public Producere
{
public:
	Produsul1();
	std::string get_denumire() override;
	Producere* clone() override;
	~Produsul1();
private:

};
class Produsul2:public Producere 
{
public:
	Produsul2();
	~Produsul2();
	std::string get_denumire() override;
	Producere* clone() override;
};
class Produsul3:public Producere
{
public:
	Produsul3();
	~Produsul3();
	std::string get_denumire() override;
	Producere* clone() override;
};
class FactoryProduse
{
public:
	Producere* creaza_produs(int i);
};