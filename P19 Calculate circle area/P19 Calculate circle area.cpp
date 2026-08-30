#include<iostream>
#include<cmath>
using namespace std;

void ReadNumbers(int& D)
{
	cout << "Please enter Diameter: ";
	cin >> D;
}

float CalculateCircleArea(int D)
{
	const double PI = 3.141592653589793;
	return (float)((PI * pow(D, 2)) / 4);
}

void PrintResult(float CircleArea)
{
	cout << "The Area of the Circle is: " << CircleArea << endl;
}

int main()
{
	int D;
	ReadNumbers(D);
	cout << endl;
	PrintResult(CalculateCircleArea(D));


	system("pause>0");
	return 0;
}