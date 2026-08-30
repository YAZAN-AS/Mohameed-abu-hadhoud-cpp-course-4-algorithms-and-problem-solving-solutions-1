#include<iostream>
#include<cmath>
using namespace std;

void ReadNumbers(int& r)
{
	cout << "Please enter r: ";
	cin >> r;
}

float CalculateCircleArea(int r)
{
	const double PI = 3.141592653589793;
	return (float)(PI * pow(r, 2));
}

void PrintResult(float CircleArea)
{
	cout << "The Area of the Circle is: " << CircleArea << endl;
}

int main()
{
	int r;
	ReadNumbers(r);
	cout << endl;
	PrintResult(CalculateCircleArea(r));


	system("pause>0");
	return 0;
}