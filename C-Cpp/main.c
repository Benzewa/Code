#include<stdio.h>
int main()
{
    // Diff 1 (Print And Read)
    int Num1 = 0;
    scanf("%d",&Num1);
    printf("Num1 : %d\n",Num1);

    // Diff 2 (Casting)
    float Num2 = 10.5;
    int Num3 = (int)Num2;

    // Diff 3 (string Handling)
    
    // in C strings are handled as (Array of Characters)
    char str1[100];
    scanf("%s",str1);
    printf("The String is : %s\n",str1);

    char str2[] = "Hello World\n";
    printf("%s",str2);

    for(int i = 0;str2[i] != '\0';i++)
        printf("%c ",str[i]);

    // Also strings are handled as Pointers
    char *str3 = "Hello World I am Motaz\n";
    printf("%s\n",str3);
    for(int i = 0;*(str + i) != "\0";i++)
        printf("%c\n",*(str + i));


    // Diff 4 (Memory Allocation)


    // Diff 5 (bool)
    int flag = 1; // Represent true
    int flag = 0; // Represent false

    return 0;
}
