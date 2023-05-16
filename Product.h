#pragma once
#include"Console.h"
 
class Product
{
public:
	Product(int ID);
	Product();
	int get_id();
private:
	int ID;
};
class ProductPool 
{
public:
	void push_product(Product* new_project);
	Product* get_product(int);
private:
	std::mutex product_lock;
	std::map<int, std::list<Product*>> products_lists;
	std::condition_variable wait_product;
	Product* wait_when_product_will_be_created(int);
	std::vector<std::thread> get_elelemnt_for_each_consumer;
};
