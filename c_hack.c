#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int *get_bits(int n, int bitswanted)
{
	int *bits = malloc(sizeof(int) * bitswanted);
	int k;

	for(k = 0; k < bitswanted; k++){
		int mask =  -1 << k;
		printf("%d\n", mask);

		int masked_n = n & mask;
		printf("%d\n", masked_n);

		int thebit = masked_n >> k;

		bits[k] = thebit;
	}

	return bits;
}

int main(int argc, char const *argv[])
{
	int n = 2147483647;
	int n0 = 4294967296;
	int  bitswanted = 32;

	int *bits = get_bits(n, bitswanted);
	int *bits0 = get_bits(n0, bitswanted);
	
	printf("%d = \n", n);
	for(int i = 0; i < bitswanted; i++){
		printf("%d ", bits[i]);
	}
	
	printf("\n");
	
	printf("%d = \n", n0);
	for (int i = 0; i < bitswanted; ++i)
	{
		printf("%d ", bits0[i]);
	}

	printf("\n");

	return 0;
}