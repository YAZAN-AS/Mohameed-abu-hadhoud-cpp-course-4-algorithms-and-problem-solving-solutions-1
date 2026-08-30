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

float TotalBillAfterServiceAndTax(float Bill)
{
	float TotalBill = Bill + (Bill * 0.1);
	TotalBill = TotalBill + (TotalBill * 0.16);
	return TotalBill;

}

void Print(float TotalBill)
{
	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After Service And Sales Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please enter Total Bill:");

	Print(TotalBill);

	system("pause>0");
	return 0;
}