#include <stdio.h>
#include <string.h>
typedef struct 
{
    char FirstName[50];
    char LastName[50];
    int Age;
} Student;


int main(void)
{
    Student S1;
    S1.Age = 20;
    strcpy(S1.FirstName, "Moutaz");
    strcpy(S1.LastName, "Sami");

    printf("First Name : %s\n", S1.FirstName);
    printf("Last Name : %s\n", S1.LastName);
    printf("Age : %d\n", S1.Age);


    



    return (0);
}

