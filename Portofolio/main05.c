#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//typdef datatype craetes a synonem of the datatype
//Used to improve the readabilty of the code
//Used With Structs
typedef int inches;

struct stStudent
{
	const char *Name;//arrays could not be used on struct and cannot be changed
	int Age;
	float Grade;
};

int main(void)
{
	inches PersonOne = 180;
	inches PersonTwo = 170;
	inches PersonThree = 190;
	inches PersonFour = 200;

	printf("Person One Height : %d\n", PersonOne);
	printf("Person Two Height : %d\n", PersonTwo);
	printf("Person Three Height : %d\n", PersonThree);
	printf("Person Four Height : %d\n\n", PersonFour);

	struct stStudent S1;
	struct stStudent S2;
	S1.Name = "Moutaz";
	S1.Age = 23;
	S1.Grade = 90;
	S2.Name = "Sami";
	S2.Age = 44;
	S2.Grade = 80;

	printf("%s, %d, %.2f\n", S1.Name, S1.Age, S1.Grade);
	printf("%s, %d, %.2f\n", S2.Name, S2.Age, S2.Grade);




	return (0);

}
