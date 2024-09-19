#include <stdio.h>
//bubble sort

void Sort(int Arr[], int Size);
void PrintArr(int Arr[], int Size);

int main(void)
{
	int Arr[] = {4,8,6,3,5,7};
	//int size = sizeof(Arr);//finds size in bytes
	int Size = sizeof(Arr) / sizeof(Arr[0]); //to know how many elements
	printf("%d\n", Size);
	Sort(Arr, Size);
	PrintArr(Arr, Size);
	return (0);
}
void Sort(int Arr[], int Size)
{
	for(int i = 0; i < Size - 1; i++)
	{
		for(int j = 0; j < Size - i - 1; j++)
		{
			//Ascending to switch (<)
			if (Arr[j] > Arr[j + 1])
			{
				int Temp = Arr[j];
				Arr[j] = Arr[j + 1];
				Arr[j + 1] = Temp;
			}
		}
	}
}
void PrintArr(int Arr[], int Size)
{
	for (int i = 0; i < Size; i++)
	{
		printf("%d ",Arr[i]);
	}
}
