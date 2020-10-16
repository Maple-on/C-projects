#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

const double PI = 3.14;
double history;

vector<double> history_of_calc;

void calc_area_of_circle(double radius)
{   
    double area_of_circle = PI * radius * radius;
    history = area_of_circle;
    history_of_calc.push_back(history);
    cout << "The area of the circle with radius " << radius << " is: " << area_of_circle << endl;
}

void calc_circumference_of_circle(double radius)
{
    double circumference_of_circle = 2 * PI * radius;
    history = circumference_of_circle;
    history_of_calc.push_back(history);
    cout << "The circumference of the circle with radius " << radius << " is " << circumference_of_circle << endl;
}

void calc_area_of_scalene_triangle(double side1, double side2, double side3)
{
    double pirimeter = (side1+side2+side3)/2;
    double area_of_scalene_triangle = sqrt(pirimeter * (pirimeter - side1) * (pirimeter - side2) * (pirimeter - side3));
    history = area_of_scalene_triangle;
    history_of_calc.push_back(history);
    cout << "The area of the scalene triangle is: " << area_of_scalene_triangle << endl;
}

void calc_area_of_equilateral_triangle(double side1)
{
    double area_of_equilateral_triangle = side1 * side1 * sqrt(3) / 4;
    history = area_of_equilateral_triangle;
    history_of_calc.push_back(history);
    cout << "The area of the equilateral triangle with side " << side1 << " is " << area_of_equilateral_triangle << endl;
}

void calc_area_of_right_angle_triangle(double side1, double side2)
{
    double area_of_right_angle_triangle = side1 * side2 / 2;
    history = area_of_right_angle_triangle;
    history_of_calc.push_back(history);
    cout << "The area of the right angle triangle is: " << area_of_right_angle_triangle << endl;
}

void calc_area_of_rectangle(double side1, double side2)
{
    double area_of_rectangle = side1 * side2;
    history = area_of_rectangle;
    history_of_calc.push_back(history);
    cout << "The area of the rectangle is: " << area_of_rectangle << endl;
}

void calc_area_of_square(double side1)
{
    double area_of_square = side1 * side1;
    history = area_of_square;
    history_of_calc.push_back(history);
    cout << "The area of the square is: " << area_of_square << endl;
}

void print_vector(vector<double> history_of_calc)
{   
    for (int i = 0; i < history_of_calc.size(); i++)
    {   
        cout << history_of_calc[i] << endl;
    }
    
}

int main()
{
    int choice;
    int calculation_choice;
    double radius;
    double side1,side2,side3;


        do
        {   
            cout << " 0. Quit\n 1. Calculate\n 2. History\n";
            cin >> choice;
            switch (choice)
            {
                case 0:
                    cout << "Thank you for doing nothing\n";
                    return 0;
                case 1:
                    do{
                        cout << " 0. Return to meny\n 1. Calculate Area of Circle\n 2. Calculate Circumference of Circle\n 3. Calculate Area of Scalene Triangle\n 4. Calculate Area of Equilateral Triangle\n 5. Calculate Area of Right angle Triangle\n 6. Calculate Area of Rectangle\n 7. Calculate Area of Square\n";
                        cin >> calculation_choice;
                        switch (calculation_choice)
                        {
                            case 1:
                                cout << "Type the radius of your circle:\n";
                                cin >> radius;
                                calc_area_of_circle(radius);
                                break;

                            case 2:
                                cout << "Type the radius of your circle:\n";
                                cin >> radius;
                                calc_circumference_of_circle(radius);                        
                                break;

                            case 3:
                                cout << "Type three sides of your scalene triangle\n";
                                cin >> side1 >> side2 >> side3;
                                calc_area_of_scalene_triangle(side1, side2, side3);
                                break;

                            case 4:
                                cout << "Type the side of your equilaretal triangle:\n";
                                cin >> side1;
                                calc_area_of_equilateral_triangle(side1);                        
                                break;
            
                            case 5:
                                cout << "Type two sides of your right andgle triangle\n";
                                cin >> side1 >> side2;
                                calc_area_of_right_angle_triangle(side1, side2);
                                break;
                            case 6:
                                cout << "Type two sides of your rectangle\n";
                                cin >> side1 >> side2;
                                calc_area_of_rectangle(side1, side2);
                                break;
                            case 7:
                                cout << "Type a side of your square\n";
                                cin >> side1;
                                calc_area_of_square(side1);
                                break;

                            default:
                                cout << "You did not choose possible options\n";
                                break;
                        }
        
                    }while(calculation_choice != 0);

                break;
                case 2:
                if (history != 0)
                {   
                    cout << "History of your calculations:\n";
                    print_vector(history_of_calc);
                    break;
                }else
                {
                    cout << "You have not made any calculations yet\n";
                    break;
                }
                    
                    print_vector(history_of_calc);
                    break;

                default:
                    cout << "You did not choose possible options\n";
                    break;
            }
        } while (choice != 0);
        
    system("pause");
    return 0;
}