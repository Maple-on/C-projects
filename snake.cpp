#include <iostream>
#include <conio.h> // console input and output
#include <windows.h>
#include<time.h> 
using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;

enum eDirection{ STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Setup()
{
    srand(time(NULL));
    gameOver = false;
    dir = STOP;
    x = rand() % width;
    y = rand() % height;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}
void Draw()
{
    system("cls");// clear console window
    for (int i = 0; i<width+2; i++)
        cout << "#";
        cout << endl;
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j==0)
            {
                cout<<"#";
            }
            if (i==y && j==x)
            {   
                cout << "O";
            }
            else if (i == fruitY && j == fruitX)
            {
                cout << "F";
            }
            else
            {   
                bool print = false;
                for(int k = 0; k < nTail; k++)
                {   

                    if(tailX[k] == j && tailY[k] ==i)
                    {
                        cout << "o";
                        print = true;
                    }
                }
                if(!print)
                {
                    cout << " ";
                }
            }

            if (j==width-1)
            cout << "#";
            
        }
        cout << endl;
    }

    for (int i = 0; i<width+2; i++)
        cout << "#";
        cout << endl;
    
}
void Input()
{
    if(_kbhit()) // presing on keybord 
    {
        switch (_getch())
        {
        case 'a':
            dir = LEFT;
            break;
        case 'd':
            dir = RIGHT;
            break;
        case 'w':
            dir = UP;
            break;
        case 's':
            dir = DOWN;
            break;
        case 27:
            gameOver = true;
            break;
        }
    }
}
void Logic()
{   
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i< nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y= tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;

    default:
        break;
    }
    // if (x > width || x < 0 || y > height || y<0)
    // {
    //     gameOver = true;
    //     cout << "Uuups You hit the wall, try again !!!\n";
    // }
    if(x >= width)
    {
        x = 0;
    }
    else if(x<0)
    {
        x = width -1; 
    }
    if(y >= height)
    {
        y = 0;
    }
    else if(y<0)
    {
        y = height -1; 
    }
    

    for( int i = 0; i < nTail; i++)
    {
        if(tailX[i] == x && tailY[i] == y)
        {
            gameOver = true;
            cout << "Uuups You hit your body, try again !!!\n";
        }
    }
    if(x == fruitX && y == fruitY)
    {   
        srand(time(NULL));
        score = score + 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
    cout << "Score: " << score << endl;
    cout << "Press ESC to finish the game\n";
    
}

int main()
{   
    cout << "------------------------------------------------------ SNAKE game ------------------------------------------------------\n";
    int option;
    cout << " 0. Quit\n 1. PLay\n";
    gameAgain:
    cin >> option;
    if (option == 0)
    {
        system("pause");
        return 0;
    }
        Setup();
        do
        {
            Draw();
            Input();
            Logic();
            Sleep(20);
        }while (!gameOver);

        if (!gameOver);
        {   
            for (int i=0; i<=100; i++) tailX[i] = 0;
            for (int i=0; i<=100; i++) tailY[i] = 0;
            cout << "------------------------------------------------------ Game Over ------------------------------------------------------\n";
            cout << " 0. Quit\n 1. PLay again\n";
            goto gameAgain;
        }

    system("pause");
    return 0;
}