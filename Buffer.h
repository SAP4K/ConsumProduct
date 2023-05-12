#pragma once
#include<list>
#include"Producere.h"
class Buffer
{
public:
	void push_produs(Producere*);
	Producere* pop_produs(int);
	size_t get_size(int);
private:
	std::list<Producere*> primul_produs;
	std::list<Producere*> al_doilea_produs;
	std::list<Producere*> al_treilea_produs;
};

