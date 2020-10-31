/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the Program to display arithmetic operator using switch case..  
***/
#include <iostream>
using namespace std;
int main()
{   
    char choice;
    int num1,num2;
    cout << "Please type an operator:\n";
    cout << " 1. +\n 2. -\n 3. *\n 4. /\n 5. %\n";
    cin >> choice;
    switch (choice) // using swith statement to choose cases
    {
    case '+': // this case is used if the user types "+"
        cout << "Please write two numbers\n";
        cin>>num1>>num2;
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;// break is used to finish one case 
    case '-': // this case is used if the user types "-" 
        cout << "Please write two numbers\n";
        cin>>num1>>num2;
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*': // this case is used if the user types "*" 
        cout << "Please write two numbers\n";
        cin>>num1>>num2;
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/': // this case is used if the user types "/" 
        cout << "Please write two numbers\n";
        cin>>num1>>num2;
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    case '%': // this case is used if the user types "%" 
        cout << "Please write two numbers\n";
        cin>>num1>>num2;
        cout << num1 << " % " << num2 << " = " << num1 % num2 << endl;
        break;
    
    default: // this case is used if the user types not available operators
        cout << "You have not choosed available options!!!\n";
        break;
    }
    system("pause");
    return 0;
}