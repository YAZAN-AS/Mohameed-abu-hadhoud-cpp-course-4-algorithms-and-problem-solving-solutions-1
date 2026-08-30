#include<iostream>
using namespace std;

void ReadNumbers(int& A, int& B)
{
	cout << "Please enter rectangle width: ";
	cin >> A;
	cout << "Please enter rectangle lenght: ";
	cin >> B;
}

int CalculateRectangleArea(int A, int B)
{
	return A * B;
}

void PrintResult(int RectangleArea)
{
	cout << "The Area of the Rectangle is: " << RectangleArea << endl;
}

int main()
{
	int A, B;
	ReadNumbers(A, B);
	cout << endl;
	PrintResult(CalculateRetangleArea(A, B));


	system("pause>0");
	return 0;
}