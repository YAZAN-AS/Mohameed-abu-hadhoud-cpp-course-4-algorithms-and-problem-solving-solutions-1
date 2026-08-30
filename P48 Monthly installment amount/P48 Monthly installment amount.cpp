#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Num;
	do
	{
		cout << Message << endl;
		cin >> Num;
	} while (Num <= 0);
	return Num;
}

float MonthyInstallment(float LoanAmount, float TotalMonths)
{
	return LoanAmount / TotalMonths;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Account:");
	float TotalMonths = ReadPositiveNumber("Please Enter Total Months:");

	cout << "\nMonthly Installment to pay: " << MonthyInstallment(LoanAmount, TotalMonths) << endl;

	system("pause>0");
	return 0;
}