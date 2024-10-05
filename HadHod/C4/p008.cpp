#include <iostream>
using namespace std;

struct stInfo
{
	int Age;
	bool HasLicense;
	bool HasRecommendation;
};

stInfo ReadInfo();
bool IsHired(stInfo Info);
void PrintRes(bool Result);

int main(void)
{
	PrintRes(IsHired(ReadInfo()));
}

stInfo ReadInfo()
{
	stInfo Info;
	cout<<"How old are You?\n";
	cin>>Info.Age;
	cout<<"Do have a driving License?\n";
	int LicenseInput;
	cin>>LicenseInput;
	Info.HasLicense = (LicenseInput == 1);
	cout<<"Do you have Recommendation?\n";
	int RecommendationInput;
	cin>>RecommendationInput;
	Info.HasRecommendation = (RecommendationInput == 1);
	return Info;
}
bool IsHired(stInfo Info)
{
	if (Info.HasRecommendation)
		return 1;
	else if (Info.Age > 18 && Info.HasLicense)
		return 1;
	else
		return 0;
}

void PrintRes(bool Result)
{
	if (Result)
		cout<<"You are Hired\n";
	else
		cout<<"You are not Hired\n";
}
