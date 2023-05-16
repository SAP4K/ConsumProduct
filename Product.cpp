#include "Product.h"
 
Product::Product()
{
	this->ID = NULL;
}
Product::Product(int ID):ID(ID) 
{

};
void ProductPool::push_product(Product* new_product)
{
		this->product_lock.lock();
		this->products_lists[new_product->get_id()].push_back(new_product);
		this->product_lock.unlock();
}
int Product::get_id()
{
	return this->ID;
}
Product* ProductPool::get_product(int product_id)
{
	if(this->products_lists[product_id].empty())
	{

	}
	else
	{
		this->product_lock.lock();
		Product* product_return = this->products_lists[product_id].front();
		this->products_lists[product_id].pop_front();
		this->product_lock.unlock();
		return product_return;
	}
	return nullptr;
}
 