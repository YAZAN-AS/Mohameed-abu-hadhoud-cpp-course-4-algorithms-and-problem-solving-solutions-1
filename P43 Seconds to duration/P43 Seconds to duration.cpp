#include<iostream>
using namespace std;

int ReadNum(string Message)
{
	int num;
	cout << Message << endl;
	cin >> num;
	return num;
}

void SecondsToDuration(int& Days, int& Hours, int& Minutes, int& Seconds, int TotalSeconds)
{
	Days = TotalSeconds / (24 * 60 * 60);
	TotalSeconds %= (24 * 60 * 60);
	Hours = TotalSeconds / (60 * 60);
	TotalSeconds %= (60 * 60);
	Minutes = TotalSeconds / (60);
	TotalSeconds %= (60);
	Seconds = TotalSeconds;

}

void Print(int D, int H, int M, int S)
{
	cout << endl;
	cout << D << " Days" << endl;
	cout << H << " Hours" << endl;
	cout << M << " Minutes" << endl;
	cout << S << " Seconds" << endl;


}

int main()
{
	int TotalSeconds = ReadNum("Please Enter The Number Of Seconds:");
	int Days, Hours, Minutes, Seconds;
	SecondsToDuration(Days, Hours, Minutes, Seconds, TotalSeconds);

	Print(Days, Hours, Minutes, Seconds);

	system("pause>0");
	return 0;
}