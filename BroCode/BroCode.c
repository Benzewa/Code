#include <stdio.h>
#include <stdbool.h>
int main(void)
{
    //Part 1 -> comments and escape sequences
    printf("Hello World\n");
    //commenting
    //escape sequences
    // \backslash 
    // \n newline
    // \t tabspace
    // \a alert

    printf("\"I like Pizza\" -> Abraham Lincoln\n");
    printf("\'I like Pizza\' -> Abraham Lincoln\n");
    printf("\\I like Pizza\\ -> Abraham Lincoln\n");
    //Part 1 -> comments and escape sequences

    //Part 2
    int x;       //4 bytes (-2,147,483,648 to 2,147,483,648) %d
    int age;
    float   gpa; //4 bytes (32 bits) (6 - 7 digits) %f
    double  d;   //8 bytes (64 bits) (15 - 16 digits) %lf
    char    grade;
    char name[] = "moutaz";
    bool Flag = true; //1 byte (true or false) %d

    x = 123;
    age = 24;
    gpa = 3.6;
    grade = 'A';

    printf("Hello %s\n",name);
    printf("You are %d years old\n",age);
    printf("Your Average grade is %c\n",grade);
    printf("Your GPA is %f\n",gpa);
    //Part 2

    //Part 3
    //datatypes
    char f = 122; // 1 Byte -128 => && <= 127 (&c or %d)
    unsigned char c = 255; // 1 Byte (0 > 255) (%c or %d)
    printf("%d\n",f);//&d to display the actual value or the number
    printf("%c\n",f);//&c to display the character from ascii
    printf("%d\n",c);
    printf("%c\n",c);

    return (0);
}