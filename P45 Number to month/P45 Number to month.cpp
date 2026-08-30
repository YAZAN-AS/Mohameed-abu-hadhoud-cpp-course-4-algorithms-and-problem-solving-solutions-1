#include <iostream>
using namespace std;

int ReadNumberInRange(int From, int To)
{
	int Num;
	do
	{
		cout << "Enter Number beetwen " << From << " and " << To << ":" << endl;
		cin >> Num;
		if (Num > To || Num < From) { cout << "Wrong Month" << endl; }
	} while (Num > To || Num < From);
	return Num;
}

void Print(int Num)
{
	switch (Num) {
	case 1:cout << "January" << endl; break;
	case 2:cout << "Febraory" << endl; break;
	case 3:cout << "March" << endl; break;
	case 4:cout << "April" << endl; break;
	case 5:cout << "May" << endl; break;
	case 6:cout << "June" << endl; break;
	case 7:cout << "July" << endl; break;
	case 8:cout << "August" << endl; break;
	case 9:cout << "September" << endl; break;
	case 10:cout << "October" << endl; break;
	case 11:cout << "November" << endl; break;
	case 12:cout << "December" << endl; break;
	}
}
int main()
{
	Print(ReadNumberInRange(1, 12));

	system("pause>0");
	return 0;
}