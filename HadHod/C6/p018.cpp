// vid 20 
// Static Variables : Value will var will stay and could be updated inside a function
// similar to global variable but in the scope of the function

#include <iostream>
void MyFunc();
int main()
{
    MyFunc();
    MyFunc();
    MyFunc();
}
void MyFunc()
{
    static int Num = 1;
    std::cout << Num << "\n";
    Num++;
}
