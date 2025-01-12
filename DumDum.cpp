#include <iostream>
using namespace std;

void increment(int &num)
{ // & indicates pass-by-reference
    num += 1;
    cout << "Inside function: " << num << endl;
}

int main()
{
    int value = 10;
    increment(value);  // Pass-by-reference
    cout << "Outside function: " << value << endl;  // Output: 11
    cout << "Inside B1" << endl;
    return 0;
}