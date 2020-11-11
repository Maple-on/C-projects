#include <iostream>
#include <cmath>
#include <string>
#include <ctime> 
#include <vector>
#include <fstream> //file stream

using namespace std;

int best_score;
void print_vector(vector<int> vector)
{
        // cout << "Your tries: ";
    for (int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << "\t";
    }
    cout << endl;
    
}

void play_game()
{   

    vector<int> guesses;
    int guess_count = 0;

    int random = rand() % 251;
    cout << random << endl;
    cout << "guess the number\n";

    while(true)
    {
        int guess;
        cin >> guess;
        guess_count++;
        guesses.push_back(guess);

        if (guess == random)
        {
            cout << "you win\n";
            cout << "Your tries:\t";
            break;
            }else if (guess < random)
            {
                cout << "Too low\n";
            } else
            {
            cout << "Too high\n";
        }
         
    } 
    ifstream input("best_score.txt");


    input >> best_score;

    ofstream output("best_score.txt");
    if(guess_count < best_score)
    {
        output << guess_count;
    }else
    {
        output << best_score;
    }
    

    print_vector(guesses);
}


int main()
{   

    int choice;
    srand(time(NULL));
    
    do
    {
        cout << " 0. Quit\n 1. Play game \n 2. Best score\n";
        cin >> choice;
        switch (choice)
        {
        case 0:
            cout << "Thanks for nothing\n";
            break;
        case 1:
            play_game();
            break;
        case 2:
            ifstream score("best_score.txt");
            score >> best_score;
            
            if(score.is_open())
            {
                cout << best_score << endl;
            }else
            {
                cout << "there is not yet the best score\n";
            }
            break;
        }

    } while (choice != 0);

system("pause");
return 0;

   
}