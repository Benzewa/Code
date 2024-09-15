#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//You can use typedef to the struct to not write struct each time You use in main
typedef struct
{
	int x;
	int y;
} Point;


struct stStudent
{
	char Name[10];//arrays could not be used on struct and cannot be changed
	int Age;
	float Grade;
};

int main(void)
{
    struct stStudent S3 = {"Mohammed", 33, 100}; //this is how to not get an error with the string
	printf("%s, %d, %.2f\n", S3.Name, S3.Age, S3.Grade);

	Point P1;
	P1.x = 20;
	P1.y = 30;

	printf("%d, %d\n", P1.x, P1.y);
	

	return (0);

}
