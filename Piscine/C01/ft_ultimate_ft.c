#include <stdio.h>
void ft_ultimate_ft(short int ********nbr);
int	main(void)
{
	short int a;
	short int *ptr9;
	short int **ptr8;
	short int ***ptr7;
	short int ****ptr6;
	short int *****ptr5;
	short int ******ptr4;
	short int *******ptr3;
	short int ********ptr2;
	short int *********ptr1;

	a = 21;
	ptr9 = &a;             // ptr9 points to a
	ptr8 = &ptr9;          // ptr8 points to ptr9
	ptr7 = &ptr8;          // ptr7 points to ptr8
	ptr6 = &ptr7;          // ptr6 points to ptr7
	ptr5 = &ptr6;          // ptr5 points to ptr6
	ptr4 = &ptr5;          // ptr4 points to ptr5
	ptr3 = &ptr4;          // ptr3 points to ptr4
	ptr2 = &ptr3;          // ptr2 points to ptr3
	ptr1 = &ptr2;          // ptr1 points to ptr2

	ft_ultimate_ft(*ptr1);

	printf("%d\n", a);  // Should print 42
	return 0;
}
void ft_ultimate_ft(short int ********nbr)
{
	********nbr = 42;    // Set the value of a to 42
}
