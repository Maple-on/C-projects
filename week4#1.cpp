/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the Program to calculate sum of numbers from m to n" 
***/
#include <iostream>

using namespace std;

int main()
{
    int m,n,sum=0;

    cout << "Please write two numbers\n";
    cin>>m>>n;

    while (m <= n)  // using while lopp for finding the sum of numbers from m to n
    {
        sum = sum + m;
        m++;// short hand operator is used to increase by 1 
    }
    cout << sum << endl;
    system("pause");
    return 0;
}