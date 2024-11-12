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
    for(int i = 'A';i <= 'Z';i++)
    {
        for(int j = 'A';j <= 'Z';j++)
        {
            for(int k = 'A';k <= 'Z';k++)
            {
                Counter++;
                Word += i;
                Word += j;
                Word += k;
                
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
