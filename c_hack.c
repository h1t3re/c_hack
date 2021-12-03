#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *get_bits(int n, int bitswanted){
	int *bits = malloc(sizeof(int) * bitswanted);

	int k;
	for(k = 0; k < bitswanted; k++){
		int mask =  -1 << k;
		printf("%d\n", mask);
		int masked_n = n & mask;
		int thebit = masked_n >> k;
		bits[k] = thebit;
	}

	return bits;
}
int main(int argc, char const *argv[])
{
	//int limit_of_int = 4294967295;
	/*void *var = (void*)malloc(32.0);
	printf("%ld\n", sizeof(var));
	((int*)var)[0] = 2147483647;
	int int_sign_limit = 2147483647; 
	int addend = 1;
	printf("last int = %d\n", ((int*)var)[0]);
	int after_limit = int_sign_limit + addend;
	printf("after limit = %d\n", ((int*)var)[0]+1);*/
	
	int n = 134217728;

	int  bitswanted = 33;

	int *bits = get_bits(n, bitswanted);

	printf("%d = ", n);

	int i;
	for(i=0; i < bitswanted;i++){
		printf("%d ", bits[i]);
	}

	printf("\n");
	

	return 0;
}