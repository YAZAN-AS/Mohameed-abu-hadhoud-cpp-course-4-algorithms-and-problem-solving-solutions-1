#include<iostream>
using namespace std;

int ReadNumber()
{
	int N;
	cout << "Enter the totalSales: " << endl;
	cin >> N;
	return N;
}

float CalculateTheComission(int TotalSales)
{
	float Comission = 0;
	if (TotalSales > 1000000) { Comission = TotalSales / 100; }
	else if (TotalSales > 500000) { Comission = TotalSales * 2 / 100; }
	else if (TotalSales > 100000) { Comission = TotalSales * 3 / 100; }
	else if (TotalSales > 50000) { Comission = TotalSales * 5 / 100; }
	return Comission;
}

void Print(int N)
{
	cout << "The Comission is: " << CalculateTheComission(N) << endl;
}



int main()
{
	Print(ReadNumber());

	system("pause>0");
	return 0;
}