/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the Program to print Fibonacci series up to 100" 
***/
#include <iostream>

using namespace std;

int main()
{
    int m=0,n=1,sum;
    cout << " It is the Program to print Fibonacci series up to 100\n";
    
    cout << m << "\t" << n <<"\t"; // "\t" is used to create a small space between words or objects
    while (m+n<100) //using while loop for printing Fibonacci series up to 100
    {   
        sum = m + n;
        m=sum-m;
        n=sum;
        cout <<sum << "\t";
    }
    cout <<endl;
    system("pause");
    return 0;
}