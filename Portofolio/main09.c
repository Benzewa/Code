#include <stdio.h>
#include <string.h>

typedef struct 
{
    char FirstName[50];
    char LastName[50];
    int Age;
} Student;

void PrintStudentInfo(Student S);

int main(void)
{
    Student S1;
    S1.Age = 20;
    strcpy(S1.FirstName, "Moutaz");
    strcpy(S1.LastName, "Sami");

    PrintStudentInfo(S1);
    printf("First Name : %s\n", S1.FirstName);
    printf("Last Name : %s\n", S1.LastName);
    printf("Age : %d\n", S1.Age);
    
    return (0);
}

void PrintStudentInfo(Student S)
{
    //Struct function are pass value it will never apply changes on the struct on main 
    printf("First Name : %s\n", S.FirstName);
    printf("Last Name : %s\n", S.LastName);
    printf("Age : %d\n", S.Age);
    S.Age = 25;//will not change anything its pass by value
    S.FirstName[0]= 'K';//will not change anything its pass by value
}
//pass by value is a bad thing because it does make changes on the values it only makes 
//copies and changing 
//it will not change on the existing addresses