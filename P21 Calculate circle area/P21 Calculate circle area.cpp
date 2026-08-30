#include<iostream>
#include<cmath>
using namespace std;

void ReadNumbers(int& L)
{
	cout << "Please enter circumference: ";
	cin >> L;
}

float CalculateCircleArea(int L)
{
	const double PI = 3.141592653589793;
	return (float)(pow(L, 2) / (4 * PI));
}

void PrintResult(float CircleArea)
{
	cout << "The Area of the Circle is: " << CircleArea << endl;
}

int main()
{
	int L;
	ReadNumbers(L);
	cout << endl;
	PrintResult(CalculateCircleArea(L));


	system("pause>0");
	return 0;
}