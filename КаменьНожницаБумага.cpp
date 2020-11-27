#include <iostream>
#include <ctime>

using namespace std;
int main()
{   
    int option;
    string gen;
    do
    {   
        cout << "------------------------------------------------ Rock Paper Scirros -----------------------------------------------\n Choose one of the options\n 1. Rock\n 2. Paper\n 3. Scirros\n 0. Quit\n";
        cin >> option;
        srand(time(NULL)); 
        int first = 1;
        int last = 3;
        int a = first + rand() % last; 
        cout << a <<endl;
        // int a = first + rand() % (last-first+1);
        switch (a)
        {
        case 1:
            gen = "rock";
            break;
        case 2:
            gen = "paper";
            break;
        case 3:
            gen = "scirros";
            break;
        }
        if(option == a)
        {
            if(option == 1)
            {
                cout << gen << " vs " << "rock\n Your choice and computer choice is the same\n";
            }
            else if(option == 2)
            {
                cout << gen << " vs " << "paper\n Your choice and computer choice is the same\n";
            }
            else if(option == 3)
            {
                cout << gen << " vs " << "scirros\n Your choice and computer choice is the same\n";
            }
        }
        else if(option != a)
        {
            if (option == 1 && a == 2)
            {
                cout << " Your choice is stone\n Computer choice is "<< gen << endl << " You lose" << endl;  
            }
            else if (option == 2 && a == 1)
            {
                cout << " Your choice is paper\n Computer choice is "<< gen << endl << " You win" << endl;  
            }
            else if (option == 3 && a == 1)
            {
                cout << " Your choice is scirros\n Computer choice is "<< gen << endl << " You lose" << endl;  
            }
            else if (option == 1 && a == 3)
            {
                cout << " Your choice is stone\n Computer choice is "<< gen << endl << " You win" << endl;  
            }
            else if (option == 2 && a == 3)
            {
                cout << " Your choice is paper\n Computer choice is "<< gen << endl << " You lose" << endl;  
            }
            else if (option == 3 && a == 2)
            {
                cout << " Your choice is scirros\n Computer choice is "<< gen << endl << " You win" << endl;  
            }
        }
    } while (option != 0);
    

    system("pause");
    return 0;
}