#include <iostream>
#include <ctime>

using namespace std;
int main()
{
    srand(time(NULL)); 
    int first = 1;
    int last = 3;
    int a = first + rand() % last; 
    // int a = first + rand() % (last-first+1);
    switch (a)
    {
    case 1:
        cout << "rock\n";
        break;
    case 2:
        cout << "paper\n";
        break;
    case 3:
        cout << "scirros\n";
        break;
    }
    system("pause");
    return 0;
}