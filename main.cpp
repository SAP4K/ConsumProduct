#include "Consumer.h"
int main()
{
	ProductPool my_pool;
	Console con;
	Production pr(&my_pool, &con, 3);
	Production p2r(&my_pool, &con, 6);
	Consumer consume(&my_pool, &con, 3);
	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
	}
}