#include <iostream>
using namespace std;

enum enNumberType { odd = 1, Even = 2 };

int ReadNumber()
{
    int num;
    cin >> num;
    return num;
}

enNumberType CheckNumberType(int num)
{
    if ((num % 2) == 1)
    {
        return odd;
    }
    else
    {
        return Even;
    }
}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == 1) { cout << "The Number is odd" << endl; }
    else { cout << "The Number is Even" << endl; }
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));

    system("pause>0");
    return 0;
}
