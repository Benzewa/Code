// vid 17 C5
// Program to Guess a 3-Letter Password

#include <iostream>
#include <string>
using namespace std;

//string ReadPass(string Msg);
void Print();

int main()
{
    Print();
}
//string ReadPass(string Msg)
//{
//    string Input = "";
//    while(Input == "")
//    {
//        cout << Msg;
//        getline(cin, Input);
//    }
//    return Input;
//}
void Print()
{
    string Word = "";
    int Counter = 0;
    for(int i = 'A' ; i <= 'C' ; i++)
    {
        for(int j = 'A' ; j <= 'C'; j++)
        {
            for(int k = 'A'; k <= 'C';k++)
            {
                //Counter++;
                Word = Word + char(i);
                Word = Word + char(j);
                Word = Word + char(k);
                //cout << "Trial " << Counter << " : " << Word << "\n";
                cout << Word << "\n";
                //if(Word == Pass)
                //{
                //    cout << "Found At Trial .";
                //}
                Word = "";
            }
        }
    }
}
