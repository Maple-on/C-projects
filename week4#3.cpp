/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the Program to input a number and then calculate sum of its digits.
***/
#include <iostream>

using namespace std;
int main()
{   
    int m,n=0;
    cout << "Please write a number\n";
    cin >> m;
    while (m>0) // using while loop for finding all digits of a number and calculating them
    {
        n = n + m % 10;
        m = m / 10; 
    }
    cout << "Summ of its digits is: " << n << endl;
}