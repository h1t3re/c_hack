#include <stdio.h>

int main(int argc, char const *argv[])
{
	//int limit_of_int = 4294967295;
	int int_sign_limit = 2147483647; 
	int addend = 1;
	printf("last int = %d\n", int_sign_limit);
	int after_limit = int_sign_limit + addend;
	printf("after limit = %d\n", after_limit);
	return 0;
}