#include <stdio.h>
#include <stdlib.h>

int *get_ints(int number, int bitswanted)
{
	int mask = 0;
	int mask_number = 0;
	int poid = 0;
	int *bits = (int*)malloc(bitswanted*sizeof(int));
	for (int i = 0; i < bitswanted; ++i)
	{
		mask = -1 << i;// c'est 32 bit mais dans chaque bit, il y'a 32 bits
		mask_number = number & mask;
		poid = mask_number >> i;
		bits[i] = poid; 	
	}	
	printf("\n\n\n");
	return bits;
}

int main(int argc, char const *argv[])
{
	int number = 8;
	int bitswanted = 32;
	int *bits = get_ints(number, bitswanted);
	printf("%d = ", number);
	for (int i = bitswanted-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	free(bits);
	printf("\n");

	number = 2147483647;
	bits = get_ints(number, bitswanted);
	printf("%d = ", number);
	for (int i = bitswanted-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	free(bits);
	printf("\n");

	number = 2147483648;
	bits = get_ints(number, bitswanted);
	printf("%d = ", number);
	for (int i = bitswanted-1; i >= 0; --i)
	{
		printf("%d ", bits[i]);
	}
	free(bits);
	printf("\n");
	
	return 0;
}