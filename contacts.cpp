#include <iostream>
#include <fstream> //file stream
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

string name;
string number;
string filename;
array<string, 2> contact_data;
vector<string> users;
vector<string> user;
vector<string>::iterator it;


void find_number(string name)
{
    ifstream search(filename);
    string find_user;
    while(search >> find_user)
    {
        users.push_back(find_user);
    }
    it = std::find(users.begin(), users.end(), name);
    if(it != users.end())
    {   
        cout << name <<"'s phone number: ";
        // int i = it - users.begin();
        for (int i = it - users.begin()+1; i < users.size();)
        {
           cout << users[i]<< endl;
           break;
        }
    }
    else
    {
        cout << "Contact not found\n";
    }
}

void find_user(string number)
{
    ifstream search(filename);
    string find_user;
    while(search >> find_user)
    {
        users.push_back(find_user);
    }
    it = std::find(users.begin(), users.end(), number);
    if(it != users.end())
    {   
        cout << number <<" is phone number of: ";
        // int i = it - users.begin();
        for (int i = it - users.begin()-1; i < users.size();)
        {
           cout << users[i]<< endl;
           break;
        }
    }
    else
    {
        cout << "Contact not found\n";
    }
}

void delete_user(string name)
{
    ifstream search(filename);
    string find_user;
    while(search >> find_user)
    {
        user.push_back(find_user);
    }

    auto it = find(user.begin(), user.end(), name);

    if(it == user.end())
    {   
        cout << "Contact not found\n";
    }
    else
    {   
        user.erase(it);
        user.erase(it);
        ofstream update(filename);
        for (int i = 0; i < user.size(); i++)
        {
            update << user[i] <<endl;
        }  
    }

    
}

void get_all_data()
{
    vector<string> all_users;
    ifstream all(filename);
    string input;
    while(all >> input)
    {
        all_users.push_back(input);
    }
    for(string all_of_users : all_users)
    {
        cout << all_of_users << endl;
    }
}

int main()
{   

    cout << "Enter file name:\n";
    cin >> filename;

    ofstream file(filename, std::ios::app);

    if(file.is_open())
    {   
        int choice;
        do
        { 
            cout << " 0) Quit\n 1) Write contact\n 2) Find contact\n 3) Delete the contact\n 4) See all contacts\n";
            cin>>choice;
            switch (choice)
            {
                case 1:
                    cout << "Write contact's name:\n";
                    cin >> name;
                    cout << "Write contact's number:\n";
                    cin >> number;
                    contact_data[0]=name;
                    contact_data[1]=number;
                    for(string details : contact_data)
                    {
                        file << details <<"\t";
                    } 
                        file <<endl;
                    break;
                case 2:
                    cout << " 1. Find the phone number by searching username\n 2. Find the username by searching phone number\n";
                    cin >> choice;
                    switch (choice)
                    {
                    case 1:
                        cout << "Write name\n";
                        cin >> name;
                        find_number(name);
                        break;
                    case 2:
                        cout << "Write phone number\n";
                        cin >> number;
                        find_user(number);
                        break;
                    
                    default:
                        break;
                    }
                    break;   
                case 3:
                    cout << "Do you really want to delete the contact?\n 1. Yes\n 2. Not\n";
                    cin >> choice;
                    if (choice == 1)
                    {
                       cout << "Write the name of the user who you want to delete\n";
                       cin >> name;
                       delete_user(name);
                       return 0;
                    }
                    else if(choice == 2)
                    {
                        break;
                    }
                    else
                    {
                        cout << "Please choose the available options";
                    }
                    break;
                case 4:
                    get_all_data();
                    break;    
                default:
                    cout << "Please choose the available options\n";
                    break;
            }
        }while (choice != 0);

    }

    system("pause");
    return 0;
}