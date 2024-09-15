#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stStudent
{
	char *Name;//arrays could not be used on struct and cannot be changed
	int Age;
	float Grade;
};

int main(void)
{
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

    struct stStudent S3 = {"Mohammed", 33, 100};
	printf("%s, %d, %.2f\n", S3.Name, S3.Age, S3.Grade);



	return (0);

}
