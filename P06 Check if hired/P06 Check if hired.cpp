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

bool HasRecommendation()
{
    bool Recommendation;
    cout << "Do you have  Recommendation? " << endl;
    cin >> Recommendation;
    return  Recommendation;
}

bool CheckIfHired(bool DriverLicense, int Age, bool  Recommendation)
{
    if (Recommendation) { return 1; }
    else
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
    PrintResult(CheckIfHired(HasDriverLicense(), ReadAge(), HasRecommendation()));

    system("pause>0");
    return 0;
}
