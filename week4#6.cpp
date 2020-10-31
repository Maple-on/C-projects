/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the Program to display series and find sum of 1+3+5+……..+n..  
***/
#include <iostream>
using namespace std;
int main()
{   
    cout << "This program will evaluate all the odd numbers till the typed one\n";
    int n,sum=0;
    cout << "please enter a number\n";
    cin >> n;
    if (n % 2 == 0) // using if statement to check if the reminder is equal to 0 or not
    {
        n = n-1;
        while (n>=1) // using while loop to find the sum of 1+3+5+……..+n
        {   
            sum = sum + n;
            n = n-2;
        }
        cout << sum << endl;
    }else // using else statement if reminder is not equal to 0
    {
        while (n>=1)
        {   
            sum = sum + n;
            n = n-2;
        }
        cout << sum << endl;
    }
    system("pause");
    return 0;
}