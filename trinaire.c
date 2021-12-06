#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void convert_int_to_binary(int *bits, int number, int binary_length)
{
	int mask = 0;
	int number_and_mask = 0;
	for (int i = 0; i < binary_length; ++i)
	{
		mask = 1 << i;
		number_and_mask = number & mask;
		bits[i] = number_and_mask >> i;
	}
}
int main(int argc, char const *argv[])
{
	int int_length = 32;
	int array_length = 6;
	int *array = (int*)malloc(array_length*sizeof(int));
	array[0] = 0;
	array[1] = 1;
	array[2] =  2147483647;
	array[3] =  2147483648;
	array[4] =  4294967295;
	array[5] = -1;
	int *bits = (int *)malloc(int_length*sizeof(int));
	int *result = (int *)malloc(int_length*array_length*sizeof(int));
	for (int j = 0; j < array_length; ++j)
	{
		printf("%d = ", array[j]);
		convert_int_to_binary(bits, array[j], int_length);
		for (int i = int_length-1; i >=	 0; --i)
		{
			result[32*j+(32-i-1)] = bits[i];
			printf("%d ", result[32*j+(32-i-1)]);
		}
		printf("\n");
	}
	free(array);
	free(bits);
	free(result);
	return 0;
}
