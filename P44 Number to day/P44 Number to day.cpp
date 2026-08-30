#include <iostream>
using namespace std;

int ReadNumberInRange(int From, int To)
{
	int Num;
	do
	{
		cout << "Enter Number beetwen " << From << " and " << To << ":" << endl;
		cin >> Num;
		if (Num > To || Num < From) { cout << "Wrong Day" << endl; }
	} while (Num > To || Num < From);
	return Num;
}

void Print(int Num)
{
	switch (Num) {
	case 1:cout << "It's Sunday" << endl; break;
	case 2:cout << "It's Monday" << endl; break;
	case 3:cout << "It's Tuesday" << endl; break;
	case 4:cout << "It's Wednesday" << endl; break;
	case 5:cout << "It's Thursday" << endl; break;
	case 6:cout << "It's Friday" << endl; break;
	case 7:cout << "It's Saturday" << endl; break;
	}
}
int main()
{
	Print(ReadNumberInRange(1, 7));

	system("pause>0");
	return 0;
}