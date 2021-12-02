#include <stdio.h>

int main(int argc, char const *argv[])
{
	//int limit_of_int = 4294967296;
	int limit_of_int = 2147483647;
	int add = 1;
	printf("last int = %d\n", limit_of_int);
	int after_limit = limit_of_int +add;
	printf("after haffa = %d\n", after_limit);
	return 0;
}