#include <iostream>
#include<cstdlib>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Num;
	while (1)
	{
		cout << Message << endl;
		cin >> Num;
		if (Num == 1234) { break; }
		system("color 4F");
		cout << "Wrong Number" << endl;
	}

	return Num;
}

void CheckIfTrue(int PIN_Code)
{
	if (PIN_Code == 1234) { system("color 2F"); cout << "\nYour Balance is: " << 7500 << endl; }
	else { cout << "\nYour Account is Locked" << endl; }
}

int main()
{
	CheckIfTrue(ReadPositiveNumber("Please Enter PIN Code:"));

	system("pause>0");
	return 0;
}
