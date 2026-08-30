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

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
	return LoanAmount / MonthlyInstallment;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Account:");
	float MonthlyInstallment = ReadPositiveNumber("Please Enter Monthly Installment:");

	cout << "\nTotal Months to pay: " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

	system("pause>0");
	return 0;
}