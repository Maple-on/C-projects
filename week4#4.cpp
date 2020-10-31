/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the program to find whether given number is a prime number or not. 
***/
#include <iostream>
using namespace std;
int main()
{   
    int m,i=2,n=0;
    cout << "Please write a number to find is it prime or not\n";
    cin >> m;

    if (m <= 1) // using if statement for knowing is the number is less or equal to 1
    {
        cout << "You wrote number 1 or less\n";
    }
    else // using else statement for knowing is the number is less or equal to 1
    {
        while (i <= m/2) // using while loop for the number is prime or not
        {
            if(m % i == 0) // using if statement for knowing is the reminder is equal to 0 or not
            {
                n=1;
                break;
            }
            ++i; // short hand operator is used to increase by 1 
        }

        if(n==0) // using if statement for checking is the reminder is equal to 0 or not
        {
            cout << m << " is a prime number\n";
        }
        else // using else statement if reminder is not equal to 0
        {
            cout << m << " is not a prime number\n";
        }
    }
    system("pause");
    return 0;
}