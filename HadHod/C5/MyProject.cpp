#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
enum enChoice{Rock = 1,Paper = 2,Scissor =3};
enum enWinner{Player = 1,Computer = 2,Draw = 3};
struct stRoundInfo
{
    int RoundNumber;
    enChoice PlayerChoice;
    enChoice ComputerChoice;
    enWinner RoundWinner;
    string WinnerName;
};
struct stGameInfo
{
    int GameRounds;
    int PlayerWinTimes;
    int ComputerWinTimes;
    int DrawTimes;
    enWinner GameWinner;
    string WinnerName;
};
int Random(int From,int To)
{
    return rand() % (To - From + 1) + From;
}
string WinnerName(enWinner Winner)
{
    string WinnerName[3] = {"Player","Computer","Draw"};
    return WinnerName[Winner - 1];
}
string ChoiceName(enChoice Choice)
{
    string Choices[3] = {"Rock","Paper","Scissor"};
    return Choices[Choice - 1];
}
enWinner WhoWonRound(stRoundInfo RoundInfo)
{
    if(RoundInfo.PlayerChoice == Rock)
    {
        if(RoundInfo.ComputerChoice == Scissor)
            return Player;
        else if(RoundInfo.Computer == Paper)
            return Computer;
        else
            return Draw;
    }
    else if(RoundInfo.PlayerChoice == Paper)
    {
        if(RoundInfo.ComputerChoice == Rock)
            return Player;
        else if(RoundInfo.Computer == Scissor)
            return Computer;
        else
            return Draw;
    }
    else
    {
        if(RoundInfo.ComputerChoice == Paper)
            return Player;
        else if(RoundInfo.Computer == Rock)
            return Computer;
        else
            return Draw;
    }
}
void PrintRoundResults(stRoundInfo RoundInfo)
{
    cout << "---------Round [" << RoundInfo.RoundNumber << "] -----------\n";
    cout << "Player Choice " << ChoiceName(RoundInfo.PlayerChoice) << "\n";
    cout << "Computer Choice " << WinnerName(RoundInfo.ComputerChoice) << "\n";
    cout << "Round Winner " << RoundInfo.WinnerName << "\n";
    cout << "\n";
}
enWinner WhoWonGame(int PlayerWinTimes,int ComputerWinTimes)
{
    if(PlayerWinTimes > ComputerWinTimes)
        return Player;
    else if(PlayerWinTimes > ComputerWinTimes)
        return Computer;
    else
        return Draw;
}
