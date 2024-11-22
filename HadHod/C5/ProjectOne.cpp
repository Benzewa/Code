// Stone - Paper - Scissor Game
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
enum enWinner{Player,Computer,Draw};
enum enChoice{Stone,Paper,Scissor};
struct RoundStats
{
    int PlayerWins;
    int ComputerWins;
    int Draws;
};
struct GameStats
{
    int PlayerWin;
    int ComputerWin;
    int Draw;
};
enChoice ReadChoice();
int Random(int From,int To);
void Start();
int RoundsCount();
bool PlayAgain();
int main()
{
    srand((unsigned)time(NULL));
    Start();
}
enChoice ReadChoice()
{
    int Num = 0;
    cout << "1-Stone, 2-Paper, 3-Scissor\n";
    cin >> Num;
    return enChoice(Num);
}
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}

void Start()
{

    int NumRounds = RoundsCount();
    for(int i = 0 ;i < NumRounds;i++)
    {
        ReadChoice();
    }
    PlayAgain();
}
int RoundsCount()
{
    int Num = 0;
    cout << "How Many Rounds You Want To Play? ";
    cin >> Num;
    return Num;
}
bool PlayAgain()
{
    bool Play = true;
    char YesNo = 'a';
    for(;Play == true;)
    {
        cout << "Wanna Play (Y - Yes) (N - No) ? ";
        cin >> YesNo;
        if(YesNo == 'n' || YesNo == 'N')
            Play = false;
        else
            Start();
    }
    return false;
}
