#include <stdio.h>
#include <string.h>

int main(void)
{
	//*****part 1*****//
	// comment option shift a
	// format  option shift f
	/*
	printf("Hello World\n");
	int	speed;
	speed = 0;
	int	time;
	time = 0;
	printf("Speed : ");
	scanf("%d", &speed);
	printf("time : ");
	scanf("%d", &time);
	int	distance;
	distance = speed * time;
	printf("distance is %d", distance);
	*/

	//*****part 2*****//
    /*
	float x = 1.234;
    double y = 1.234;

	printf("x : ");
    scanf("%f", &x);
    printf("x = %f\n", x);
	printf("y : ");
    scanf("%lf", &y);
    printf("y = %lf\n", y); //%f could be used with doubles 
	*/
	/*
	char c = 'd';
    printf("c : ");
    scanf("%c", &c);
    printf("c = %c\n", c);
    // to show the ascii value
    printf("c = %d\n", c);
	*/
	/*
	double x = 5.2;
    double y = 2.5;
    double multi = x * y;
    double add = x + y;
    double div = x / y;
    double sub = x - y;

    printf("multiplication : %f\n", multi);
    printf("addition : %f\n", add);
    printf("division : %f\n", div);
    printf("subtraction : %f\n", sub); */

    /*
	int x = 11, y = 3;
    int div = x / y;
    int mod = x % y;
    printf("div = %d\n", div);
    printf("mod = %d\n", mod);
	*/

    // mod %2 == 0 even
    // mod % 2 == 1 odd

    /*
	int x = 4;
    int mod = x % 2;
    if (mod)
    {
        printf("odd\n");
    }
	*/

    // control structures
    /*
	int Grade = 0;
    printf("Grade : ");
    scanf("%d",&Grade);

    if(Grade >= 90) printf("Passed GPA : A\n");
    else if(Grade >= 80) printf("Passed GPA : B\n");
    else if(Grade >= 70) printf("Passed GPA : C\n");
    else if(Grade >= 60) printf("Passed GPA : D\n");
    else if(Grade >= 50) printf("Passed GPA : E\n");
    else printf("Failed\n");
	*/

    // looping
    // while loop

    /*
	int i = 0;
    while (i < 5)
    {
     printf("i : %d\n",i);
     i+=1;
    }
	*/

    /*
	int i = 0;
    int Sum = 0;
    while (i < 5)
    {
        Sum += i;
        i += 1;
    }
    printf("The Sum is %d\n",Sum);
	*/

    /*
	int i = 0;
    int Num = 0;
    int Sum = 0;
    while (i < 5)
    {
        printf("Enter Num %d\n",i+1);
        scanf("%d",&Num);
        Sum += Num;
        i += 1;
    }
    printf("The Sum is %d\n",Sum);
	*/
    // infinte loop until user enter -1
    // and prints out the maximum number
    /*
	int i = 0;
    int max = 0;
    while (i != -1)
    {
        printf("Enter A Number : ");
        scanf("%d", &i);
        if (i > max)
            max = i;
        printf("Max : %d\n",max);
    }
    printf("Max number is %d\n", max);
	*/

	// arrays
    // int Grade[5] = {};
    /*
	Grade[0] = 92;
    Grade[1] = 97;
    Grade[2] = 72;
    Grade[3] = 82;
    Grade[4] = 99;
	*/

    /*
	int Grade[5] = {92, 97, 72, 82, 99};
    int Grade[] = {92, 97, 72, 82, 99};
	//you dont need to initialize the array size

    int i = 0;
    while (i < 5)
    {
        printf("%d\n", Grade[i]);
        i += 1;
    }

    i = 0;
    int Counter = 0;
    int TotalGrades = 0;
    while (i < 5)
    {
        TotalGrades += Grade[i];
        i++;
        Counter++;
    }
    printf("The Total Grades is %d\n", TotalGrades);
    printf("The Average of Grades is %d\n", (TotalGrades / Counter));
	*/

    // strings in C
    /*
	char S1[5] = {'a', 'b', 'c', 'd', '\0'};
    char S2[5] = "abcd\0";

    printf("%s\n",S1);
    printf("%s\n",S2);

    char S3[] = "This is My String.\0";
    printf("%s\n",S3);

    int i = 0;
    while (i<=18)
    {
        if(S3[i] == '\0')
            printf("s3[%.2d] = \\0",i);
			//to print the null Terminator Symbol
        else
            printf("s3[%.2d] = %c\n",i,S3[i]);
        i++;
    }

    printf("\n%s\n",S3);
	*/

    /*
	char S1[20];
    printf("Enter A String\n");
    scanf("%s", S1);
	// we dont use the & here because the string is
	//the address of the first letter by default
    printf("%s\n", S1);

    int i = 0;
    int counter = 0;
    while (i < 20)
    {
        if (S1[i] != '\0')
            counter++;
        else
            break;
        i++;
    }
    printf("The length of the string is %d\n",counter); */

    char S1[] = "This is the way.";
    int S1len = strlen(S1);
    printf("length %d",S1len);

    return (0);
}
