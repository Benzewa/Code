// VId 16 Functions OverLoading
// One Name for Multiple Function with similar functionality But different Num/type of Args
// OverLoading IS a TYpe of Polymorphism


// int = 1
// double = 1.2
// float  = 1.2f

#include <iostream>

int MySum(int A,int B);
int MySum(int A,int B,int C);
int MySum(int A,int B,int C,int D);

float MySum(float A,float B);
float MySum(float A,float B,float C);
float MySum(float A,float B,float C,float D);

int main()
{
    std::cout << "\nThe Sum of 2 Numbers : " << MySum(1,2);
    std::cout << "\nThe Sum of 3 Numbers : " << MySum(1,2,3);
    std::cout << "\nThe Sum of 4 Numbers : " << MySum(1,2,3,4);

    std::cout << "\nThe Sum of 2 Floats : " << MySum(1.3f,2.5f);
    std::cout << "\nThe Sum of 3 Floats : " << MySum(1.3f,2.1f,3.2f);
    std::cout << "\nThe Sum of 4 Floats : " << MySum(1.5f,2.3f,3.6f,4.1f);
}

int MySum(int A,int B)
{
    return A + B;
}
int MySum(int A,int B,int C)
{
    return A + B + C;
}
int MySum(int A,int B,int C,int D)
{
    return A + B + C + D;
}

float MySum(float A,float B)
{
    return A + B;
}
float MySum(float A,float B,float C)
{
    return A + B + C;
}
float MySum(float A,float B,float C,float D)
{
    return A + B + C + D;
}
