#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//this is the way we can pass by Ref in structs
typedef struct
{
	char FirstName[20];
	char LastName[20];
	int Age;
} stStudent;

void AddToStudentAge(stStudent *S);

int main(void)
{
	//dynamically allocated Student
	//*S1 pointer to student in memory
	//S1 = calloc(1, sizeof(Student));
	//S2 = malloc(1 * sizeof(Student));

	stStudent *S1;//S1 is a pointer
	S1 = calloc(1 , sizeof(stStudent));
	(*S1).Age = 20;
	printf("Age : %d\n", (*S1).Age);
	AddToStudentAge((S1));//S1 is A pointer
	printf("Age : %d\n", (*S1).Age);
	free(S1);
	return (0);
}
void AddToStudentAge(stStudent *S)
{
	(*S).Age += 10;
}
