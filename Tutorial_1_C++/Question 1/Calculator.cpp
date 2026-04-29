#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int optionSelect, firstNum, secondNum; 
    float calcResult;
    char empTy;

    loopLoop:

    cout<< R"(
 ____  _  _      ____  _     _____   ____  ____  _     ____ 
/ ___\/ \/ \__/|/  __\/ \   /  __/  /   _\/  _ \/ \   /   _\
|    \| || |\/|||  \/|| |   |  \    |  /  | / \|| |   |  /  
\___ || || |  |||  __/| |_/\|  /_   |  \__| |-||| |_/\|  \__
\____/\_/\_/  \|\_/   \____/\____\  \____/\_/ \|\____/\____/
    )";
    cout<< "\nEnter option:";
    cout<< "\n1) Addition +\n2) Subtraction -\n3) Multiplication *\n4) Division /\n5) Modulus n1, n2\nx) Exit program.";
    cout<< "\n\nYour selection -> ";
    cin>> optionSelect;
    if( optionSelect!= 1&& optionSelect!= 2&& optionSelect!= 3&& optionSelect!= 4&& optionSelect!= 5){
        exit(0);
    }

    cout<< "\nEnter first number : ";
    cin>> firstNum;
    cout<< "\nEnter second number : ";
    cin>> secondNum;

    switch (optionSelect)
    {
        case 1:
            calcResult= firstNum+ secondNum;
            cout<< firstNum<< " + "<< secondNum<< " = "<< calcResult;
            break;
        case 2:
            calcResult= firstNum- secondNum;
            cout<< firstNum<< " - "<< secondNum<< " = "<< calcResult;
            break;
        case 3:
            calcResult= firstNum* secondNum;
            cout<< firstNum<< " * "<< secondNum<< " = "<< calcResult;
            break;
        case 4:
            calcResult= firstNum/ secondNum;
            cout<< firstNum<< " + "<< secondNum<< " = "<< calcResult;
            break;
        case 5:
            calcResult= firstNum% secondNum;
            cout<< firstNum<< " modulus "<< secondNum<< " = "<< calcResult;
            break;
        default:
            cout<< "System error. Terminating program.";
            exit(0);
            break;


    }

    cout<< "\n\nEnter any key to continue . . .";
    cin>> empTy;
    goto loopLoop;

    
}