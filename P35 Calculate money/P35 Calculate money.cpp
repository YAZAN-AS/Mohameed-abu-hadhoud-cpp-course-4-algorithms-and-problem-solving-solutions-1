#include<iostream>
using namespace std;

void ReadNumbers(int& P, int& N, int& D, int& Q, int& Do)
{
	cout << "Penny: ";
	cin >> P;
	cout << "Nickle: ";
	cin >> N;
	cout << "Dime: ";
	cin >> D;
	cout << "Quarter: ";
	cin >> Q;
	cout << "Dollar: ";
	cin >> Do;
}

int SumTheMoney(int P, int N, int D, int Q, int Do)
{
	int Pennies = 0;
	Pennies = P + N * 5 + D * 10 + Q * 25 + Do * 100;
	return Pennies;
}

void Print(int P, int N, int D, int Q, int Do)
{
	float Pennies = SumTheMoney(P, N, D, Q, Do);
	cout << endl;
	cout << Pennies << " Pennies" << endl;
	cout << Pennies / 100 << " Dollares" << endl;
}

int main()
{
	int Penny, Nickle, Dime, Quarter, Dollar;
	ReadNumbers(Penny, Nickle, Dime, Quarter, Dollar);
	Print(Penny, Nickle, Dime, Quarter, Dollar);

	system("pause>0");
	return 0;
}