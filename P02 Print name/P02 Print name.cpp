#include <iostream>
#include <string>
using namespace std;

string Readname()
{
    string name;
    cout << "Enter Your name: ";
    getline(cin, name);
    return name;
}

void Printname(string name)
{
    cout << "\nYour name is: " << name << endl;
}


int main()
{
    Printname(Readname());

    system("pause>0");
    return 0;
}
