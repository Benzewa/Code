#include<iostream>
#include<string>
int main()
{
    // Diff 1 (Print And Read)
    int Num1 = 0;
    cin >> Num1;
    cout << "Num1 : " << Num1 << "\n";

    // Diff 2 (Casting)
    float Num2 = 10.5;
    int Num3 = static_cast<int>(Num2);

    // Diff 3 (string Handling)
    string str = "Moutaz Sami Shaban";
    getline(cin,str);
    cout << "The String is : " << str << "\n";
    char c = str[0];

    // Also could be Handled in this way
    char str2[] = "Hello World";
    char str3[6] = "Hello";

    // Diff 4 (Memory Allocation)


    // Diff 5 (bool)
    bool flag = true;
    bool flag = false;
    return 0;
}
