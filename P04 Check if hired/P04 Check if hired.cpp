#include <iostream>
using namespace std;

int ReadAge()
{
    int Age;
    cout << "Please enter your age: " << endl;
    cin >> Age;
    return Age;
}

bool HasDriverLicense()
{
    bool DriverLicense;
    cout << "Do you have driver license? " << endl;
    cin >> DriverLicense;
    return DriverLicense;
}

bool CheckIfHired(bool DriverLicense, int Age)
{
    if (Age > 21 && DriverLicense) { return 1; }
    else { return 0; }
}

void PrintResult(bool IsHired)
{
    if (IsHired) { cout << "\nHired" << endl; }
    else { cout << "\nRejected" << endl; }
}

int main()
{
    PrintResult(CheckIfHired(HasDriverLicense(), ReadAge()));

    system("pause>0");
    return 0;
}

