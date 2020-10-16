
#include <iostream>
#include <string>

using namespace std;
double last_result;

double pluss(double var1, double var2)
{
    double result1 = var1 + var2;
    return result1;
}

double minuss(double var11, double var22)
{
    double result11 = var11 - var22;
    return result11;
}

double multip(double var111, double var222)
{
    double result111 = var111 * var222;
    return result111;
}
double devide(double var1111, double var2222)
{
    double result1111 = var1111 / var2222;
    return result1111;
}

double power(double base, int exponent)
{   
    double result = 1;
    for(int i = 0; i < exponent; i++ )
    {
        result = result * base;
    }
    return result;
}

int factorials(int fact)
{   
    int factorial = fact;
    for(int i = factorial - 1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}


void print_sub(double var1, double var2)
{   
    double mysum = pluss(var1, var2);
    last_result = mysum;
    cout << var1 << " + " << var2 << " = " << mysum << endl;
    
}    

void sub_num(double var11, double var22)
{
    double mysub = minuss(var11, var22);
    last_result = mysub;
    cout << var11 << " - " << var22 << " = " << mysub << endl;
}

void mul_num(double var111, double var222)
{
    double mymultip = multip(var111, var222);
    last_result = mymultip;
    cout << var111 << " * " << var222 << " = " << mymultip << endl;
}

void print_pow(double base, int exponent)
{
    double mypower = power(base, exponent);
    last_result = mypower;
    cout << base << " reaised to the " << exponent << " power is: " << mypower <<"\n";
}

void dev_num(double var1111, double var2222)
{
    double mydev = devide(var1111, var2222);
    last_result = mydev;
    cout << var1111 << " / " << var2222 << " = " << mydev << endl;
}

void fact_num(int fact)
{

    int myfact = factorials(fact);
    last_result = myfact;
    cout << "the factorial of " << fact <<" is " << myfact << endl;
}


int main()
{
    int var;
    int opt;

        do
        {   
            cout << " 0. Quit\n 1. Calculate\n 2. See the last result\n";
            cin >> var;

            switch (var)
            {
                case 0:
                    cout << "Thanks for doing nothing: \n";
                    return 0;

                case 1:
                    cout << "Choose what to do:\n";
                    cout << " 1. To add two numbers\n 2. To substract two numbers\n 3. To mulptiply two numbers\n 4. To calculate the power of a number\n 5. To devide two numbers\n 6. To calculate the factorial of a number\n>";
                    cin >> opt;
                    switch (opt)
                    {
                        case 1:
                            double var1, var2;
                            cout << "Write first number without any characters: !!!\n";
                            cin >> var1;
                            cout << "Write second number without any characters: !!!\n";
                            cin >> var2;
                            cout << "Your answer is: ";
                            print_sub(var1, var2);
                            break;
                            
                        case 2:
                            double var11, var22;
                            cout << "Write first number:\n";
                            cin >> var11;
                            cout << "Write second number:\n";
                            cin >> var22;
                            cout << "Your answer is: ";
                            sub_num(var11, var22);
                            break;

                        case 3:
                            double var111, var222;
                            cout << "Write first number:\n";
                            cin >> var111;
                            cout << "Write second number:\n";
                            cin >> var222;
                            cout << "Your answer is: ";
                            mul_num(var111, var222);
                            break; 

                        case 4:
                            double base;
                            int exponent;
                            cout << "What is your base? \n:";
                            cin >> base;
                            cout << "What is your exponent? \n:";
                            cin >> exponent;
                            print_pow(base, exponent);
                            break;

                        case 5:
                            double var1111, var2222;
                            cout << "Write first number:\n";
                            cin >> var1111;
                            cout << "Write second number:\n";
                            cin >> var2222;
                            cout << "Your answer is: ";
                            dev_num(var1111, var2222);
                            break;
                        case 6:
                            int fact;
                            cout << "Write the factorial number: \n";
                            cin >> fact;
                            fact_num(fact);
                            break;
                        
                        default:
                        cout << "You did not choose possible options\n";
                        break;
                            
                    }   
                break;
                
                case 2:
                if (last_result != 0)
                {
                    cout <<"Your last result is: " << last_result << endl;
                    break;
                }else
                {
                    cout << "You have not made any calculations yet\n";
                    break;
                }
                
                default:
                cout << "You did not choose possible oprions\n";
                break;
            }
        }
        while (var != 0);

    system("pause");
    return 0;

}