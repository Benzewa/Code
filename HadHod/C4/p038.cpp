// 90 - 100 A
// 80 - 089 B
// 70 - 079 C
// 60 - 069 D
// < 60     F

#include <iostream>
#include <string>
using namespace std;

void ReadNumInRange(int &Grade, int From, int To);
string GetGradeString(int Num);
char GetGradeChar(int Num);
void PrintStr(string Grade);
void PrintChar(char Grade);

int main(void)
{
    int Grade = 0;
    ReadNumInRange(Grade, 0 ,100);
    PrintStr(GetGradeString(Grade));
    PrintChar(GetGradeChar(Grade));
}

void ReadNumInRange(int &Grade, int From, int To)
{
    cout << "Please Enter Grade in Range " << From << " " << To << " \n";
    cin >> Grade;
    for( ; Grade < 0 || Grade > 100 ; )
    {
        cout << "Please Enter Grade in Range " << From << " " << To << " \n";
        cin >> Grade;
    }
}

string GetGradeString(int Num)
{
    if (Num >= 90)
        return "You Passed With A\n";
    else if (Num >= 80)
        return "You Passed With Grade B\n";
    else if (Num >= 70)
        return "You Passed With Grade C\n";
    else if (Num >= 60)
        return "You Passed With Grade D\n";
    else
        return "You Failed\n";
}

char GetGradeChar(int Num)
{
    if (Num >= 90)
        return 'A';
    else if (Num >= 80)
        return 'B';
    else if (Num >= 70)
        return 'C';
    else if (Num >= 60)
        return 'D';
    else
        return 'F';
}
void PrintStr(string Grade)
{
    cout << "Your Grade is : " << Grade;
}
void PrintChar(char Grade)
{
    cout << "Your Grade is : " << Grade;
}
