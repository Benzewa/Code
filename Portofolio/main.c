#include <stdio.h>
int main(void)
{
    //*****part 1*****//
    // comment option shift a
    // format  option shift f
    /* printf("Hello World\n");
    int speed = 0;
    int time = 0;
    printf("Speed : ");
    scanf("%d", &speed);
    printf("time : ");
    scanf("%d", &time);
    int distance = speed * time;
    printf("distance is %d", distance); */

    //*****part 2*****//
    /* float x = 1.234;
    double y = 1.234;

    printf("x : ");
    scanf("%f", &x);
    printf("x = %f\n", x);

    printf("y : ");
    scanf("%lf", &y);
    printf("y = %lf\n", y); //%f could be used with doubles */

    /* char c = 'd';
    printf("c : ");
    scanf("%c", &c);
    printf("c = %c\n", c);
    // to show the ascii value
    printf("c = %d\n", c); */

    /* double x = 5.2;
    double y = 2.5;
    double multi = x * y;
    double add = x + y;
    double div = x / y;
    double sub = x - y;

    printf("multiplication : %f\n", multi);
    printf("addition : %f\n", add);
    printf("division : %f\n", div);
    printf("subtraction : %f\n", sub); */

    /* int x = 11, y = 3;
    int div = x / y;
    int mod = x % y;
    printf("div = %d\n", div);
    printf("mod = %d\n", mod); */

    // mod %2 == 0 even
    // mod % 2 == 1 odd

    /* int x = 4;
    int mod = x % 2;
    if (mod)
    {
        printf("odd\n");
    } */
   
   //control structures
   int Grade = 0;
   printf("Grade : ");
   scanf("%d",&Grade);
   if(Grade >= 55)
   printf("Passed\n");
   else
   printf("Failed\n");
   
   return (0);
}