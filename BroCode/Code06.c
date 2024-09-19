#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MIN 1
#define MAX 5

int main(void)
{
	srand(time(0));
	
	int Guess = 0;
	//int Guesses;
	int Answer = (rand() % MAX) + MIN;
	do
	{
		printf("Enter A Number\n");
		scanf("%d", &Guess);
		if(Guess > Answer)
			printf("Too High\n");
		else if(Guess < Answer)
			printf("Too Low\n");
	} while(Guess != Answer);

	printf("Correct Guess\n");
	printf("The Number is %d\n",Answer);


	return (0);
}
