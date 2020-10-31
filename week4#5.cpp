/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the Program to display sum of series 1+1/2+1/3+……….+1/n.  
***/
#include <iostream>
using namespace std;
int main()
{   
    double n,sum=0;
    cout << "please enter a number\n";
    cin >> n;
    while (n>=1) // using while loop to find the sum of series 1+1/2+1/3+……….+1/n
    {
        sum = sum + 1/n;
        n--; // short hand operator to decrease by 1
    }
    cout << sum << endl;
    
    system("pause");
    return 0;
}