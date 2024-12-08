// vid 19 C6
// Power Function using Recursion

#include <iostream>
int Pow(int Base,int Power);
int main()
{
    std::cout << Pow(2,4);
}
int Pow(int Base,int Power)
{
    if(Power == 0)
        return 1;
    else
        return (Base * Pow(Base,Power - 1));

}
