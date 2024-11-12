// Encrypt And Decrypt String
// vid 18 C5

#include <iostream>
#include <string>

using namespace std;
string ReadText(string Msg);
string Encrypt(string Word, int Num);
string Decrypt(string Word, int Num);

int main()
{
    const int Key = 2;
    string Text = ReadText("Please Enter String : ");
    cout << "Text Before Encryption : " << Text << "\n";

    Text = Encrypt(Text , 1);
    cout << "Text After  Encryption : " << Text << "\n";
    
    Text = Decrypt(Text, 1);
    cout << "Text After  Decryption : " << Text << "\n";

}
string ReadText(string Msg)
{
    string Word = "";
    while(Word == "")
    {
        cout << Msg;
        getline(cin, Word);
    }
    return Word;
}
string Encrypt(string Word, int Num)
{
    for(int i = 0;i <= Word.length();i++)
    {
        Word[i] = char (int(Word[i]) + Num);
    }
    return Word;
}
string Decrypt(string Word, int Num)
{
    for(int i = 0; i <= Word.length();i++)
    {
        Word[i] = char (int(Word[i]) - Num);
    }
    return Word;
}
