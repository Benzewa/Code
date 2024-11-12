// vid 18 C5
// Encrypt and Decrypt

#include <iostream>
#include <string>
using namespace std;

string ReadWord(string Msg);
string Encrypt(string Word, int Key);
string Decrypt(string Word, int Key);

int main()
{
    string Pass = "MoutazSami";
    Pass = ReadWord("Please Enter Pass : ");
    const int Key = 2;
    cout << "Pass initial : " << Pass << "\n";
    Pass = Encrypt(Pass, Key);
    cout << "Pass After Encryption : " << Pass << "\n";
    Pass = Decrypt(Pass, Key);
    cout << "Pass After Decryption : " << Pass << "\n";
}
string ReadWord(string Msg)
{
    string Word = "";
    for(;Word == "";)
    {
        cout << Msg;
        getline(cin, Word);
    }
    return Word;
}
string Encrypt(string Word, int Key)
{
    for(int i = 0;i <= Word.length();i++)
    {
        Word[i] = char(int(Word[i]) + Key);
    }
    return Word;
}
string Decrypt(string Word, int Key)
{
    for(int i = 0;i <= Word.length();i++)
    {
        Word[i] = char(int(Word[i]) - Key);
    }
    return Word;
}
