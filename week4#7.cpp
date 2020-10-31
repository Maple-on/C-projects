/***
Name: Bekhzod
My id: U2010280
Program Statement: It is the Program to use switch statement. Display Monday to Sunday.  
***/
#include <iostream>
using namespace std;
int main()
{   
    int choice;
    cout << "Please choose a number to see the days of the week\n";
    cout << " 1\n 2\n 3\n 4\n 5\n 6\n 7\n";
    cin >> choice;
    switch (choice) // using swith statement to choose cases
    {
    case 1: // this case is used if the user types 1 
        cout << "You have choosed Monday\n";
        break; // break is used to finish one case 
    case 2:// this case is used if the user types 2
        cout << "You have choosed Tuesday\n";
        break;// break is used to finish one case 
    case 3:// this case is used if the user types 3 
        cout << "You have choosed Wednesday\n";
        break;// break is used to finish one case 
    case 4:// this case is used if the user types 4
        cout << "You have choosed Thursday\n";
        break;// break is used to finish one case 
    case 5:// this case is used if the user types 5 
        cout << "You have choosed Friday\n";
        break;// break is used to finish one case 
    case 6:// this case is used if the user types 6 
        cout << "You have choosed Saturday\n";
        break;// break is used to finish one case 
    case 7:// this case is used if the user types 7
        cout << "You have choosed Sunday\n";
        break;// break is used to finish one case 
    
    default: // this case is used if the user types numbers bigger than 7 and less then 1
        cout << "You have not choosed available options!!!\n";
        break;// break is used to finish one case
    }
    system("pause");
    return 0;
}