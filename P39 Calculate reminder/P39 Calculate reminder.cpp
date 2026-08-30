#include<iostream>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Num;
	do {
		cout << Message << endl;
		cin >> Num;
	} while (Num < 0);
	return Num;
}

float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
	return TotalCashPaid - TotalBill;
}

void Print(float TotalBill, float TotalCashPaid)
{
	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;
	cout << "*******************************" << endl;
	cout << "Remainder = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please enter Total Bill:");
	float TotalCashPaid = ReadPositiveNumber("Please enter Total Cash Paid:");

	Print(TotalBill, TotalCashPaid);

	system("pause>0");
	return 0;
}