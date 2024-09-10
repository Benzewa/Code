#include <stdio.h>
#include <string.h>

void Add_One_Arr(int Arr[], int ArrLen);
void Print_Arr(int Arr[], int ArrLen);

//arrays passes the address of the first index
//unlike the regular variables
int main(void)
{
	int ArrOne[5] = {1, 2, 3, 4, 5};
	Print_Arr(ArrOne,5);
	printf("Arr Address : %p\n",ArrOne);
	Add_One_Arr(ArrOne,5);
	Print_Arr(ArrOne,5);

	return (0);
}
void Add_One_Arr(int Arr[], int ArrLen)
{
	for (int i = 0; i < ArrLen; i++)
	{
		Arr[i] += 1;
	}
}
void Print_Arr(int Arr[], int ArrLen)
{
	for (int i = 0; i < ArrLen; i++)
	{
		printf("Arr[%d] : %d\n",i,Arr[i]);
	}
}