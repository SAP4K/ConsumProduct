#include "Buffer.h"
void Buffer::push_produs(Producere* produsul)
{
	if(typeid(*produsul) == typeid(Produsul1) )
	{
		this->primul_produs.push_back(produsul);
	}
	if (typeid(*produsul) == typeid(Produsul2))
	{
		this->al_doilea_produs.push_back(produsul);
	}
	if (typeid(*produsul) == typeid(Produsul3))
	{
		this->al_treilea_produs.push_back(produsul);
	}
}
Producere* Buffer::pop_produs(int x)
{
	Producere* returnare=nullptr;
	if( x == 0) 
	{
		if (this->primul_produs.size() > 0) {
			returnare = this->primul_produs.front();
			this->primul_produs.pop_front();
		}
	}
	if (x == 1) {
		if (this->al_doilea_produs.size() > 0) {
			returnare = this->al_doilea_produs.front();
			this->al_doilea_produs.pop_front();
		}
	}
	if (x == 2) {
		if (this->al_treilea_produs.size() > 0) {
			returnare = this->al_treilea_produs.front();
			this->al_treilea_produs.pop_front();
		}
	}
	return returnare;
}
size_t Buffer::get_size(int x)
{
	size_t returnul = 0;
	if (x == 0)
	{
		returnul=this->primul_produs.size();
	}
	if (x == 1) {
		returnul = this->al_doilea_produs.size();
		
	}
	if (x == 2) {
			returnul = this->al_treilea_produs.size();
			 
	}
	return returnul;
}