// Vid 17 C5
// Guess Pass

#include <iostream>
#include <string>
using namespace std;
string ReadPass();
bool Guess(string Origin);
int main()
{
    Guess(ReadPass());
}
string ReadPass()
{
    string Word = "";
    for(;Word == "";)
    {
        cout << "Please Enter Pass : ";
        getline(cin, Word);
    }
    return Word;
}
bool Guess(string Origin)
{
    string Word = "";
    int Counter = 0;
    for(int i = 65;i <= 90;i++)
    {
        for(int j = 65;j <= 90;j++)
        {
            for(int k = 65;k <= 90;k++)
            {
                Counter++;
                Word += char(i);
                Word += char(j);
                Word += char(k);
                
                cout << "Trial : " << Counter << " --> " << Word << "\n";
                
                if(Word == Origin)
                {
                    cout << Word << " is Found at Trial : " << Counter << " ";
                    return true;
                }
                Word = "";
            }
        }
    }
    return false;
}
