#include <stdio.h>
void ft_swap(int *pA, int *pB);
int main(void)
{
	int *pA;
	int *pB;
	int A = 5;
	int B = 10;

	pA = &A;
	pB = &B;
	printf("A Before Swap %d\n",A); 
	printf("B Before Swap %d\n",B);
	
	ft_swap(pA,pB);
	printf("\nA After Swap %d\n",A); 
	printf("B After Swap %d\n",B);

	return 0;
}
void ft_swap(int *pA, int *pB)
{
	int Temp;
	Temp = *pA;
	*pA = *pB;
	*pB = Temp;
}
