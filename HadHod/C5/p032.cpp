// vid 17 C5
// Program to Guess a 3-Letter Password

#include <iostream>
#include <string>
using namespace std;

string ReadPass(string Msg);
void Print(string Pass);

int main()
{
    Print(ReadPass("Please Enter Pass : "));
}
string ReadPass(string Msg)
{
    string Input = "";
    while(Input == "")
    {
        cout << Msg;
        getline(cin, Input);
    }
    return Input;
}
void Print(string Pass)
{
    bool Flag = false;
    string Word = "";
    int Counter = 0;
    for(int i = 'A' ; i <= 'C' ; i++)
    {
        for(int j = 'A' ; j <= 'C'; j++)
        {
            for(int k = 'A'; k <= 'C';k++)
            {
                Counter++;
                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(k);
                cout << "Trial " << Counter << " ";
                cout << Word << "\n";
                if(Word == Pass)
                    Flag = true;
                Word = "";
                if(Flag)
                {
                    cout << "Found at : " << Counter;
                    break;
                }
            }
            if(Flag)
                break;
            cout << "\n";
        }
        if(Flag)
            break;
    }
}
