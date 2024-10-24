//Pay Remainder
#include <iostream>
using namespace std;

void ReadInput(int &TotBill, int &CashPaid);
int CalcRem(int TotBill, int CashPaid);

int main()
{
    int TotBill = 0, CashPaid = 0;
    ReadInput(TotBill, CashPaid);
    cout << CalcRem(TotBill, CashPaid);
}
void ReadInput(int &TotBill, int &CashPaid)
{
    cout << "Enter Total Bill : ";
    cin >> TotBill;
    cout << "Enter Cash Paid  : ";
    cin >> CashPaid;
}
int CalcRem(int TotBill, int CashPaid)
{
    return (CashPaid - TotBill);
}
