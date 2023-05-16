#include "Consumer.h"

Consumer::Consumer(ProductPool* pool_of_products, Console* console, int product_id):Runner(pool_of_products, console, product_id)
{

}
void Consumer::run(ProductPool* pool_of_products, Console* console, int product_id) 
{
	
	while(true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1500));
		Product* product_which_will_be_used =  pool_of_products->get_product(product_id);
		console->shows_the_console("Se consuma produsul cu ID-ul: " + std::to_string(product_id)+"\n");
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		console->shows_the_console("S-a consumat produsul cu ID-ul: " + std::to_string(product_id) + "\n");
	}
};