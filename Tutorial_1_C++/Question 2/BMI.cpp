#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    float nWeight, nHeight, nBMI;
    char empTy;

    loopLoop:

    cout<< R"(
 ____  _      _    ____  ____  _     ____ 
/  __\/ \__/|/ \  /   _\/  _ \/ \   /   _\
| | //| |\/||| |  |  /  | / \|| |   |  /  
| |_\\| |  ||| |  |  \__| |-||| |_/\|  \__
\____/\_/  \|\_/  \____/\_/ \|\____/\____/
    )";
    cout<< "\n\nEnter weight (kg): ";
    cin>> nWeight;
    cout<< "\n\nEnter height (m): ";
    cin>> nHeight;

    nBMI= nWeight/(nHeight*nHeight);

    cout<< "\n\nYour B.M.I. is = "<< setprecision(5)<< nBMI<< "\n\nYour weight category is : ";

    if( nBMI< 18.5 ){
        cout<< "UNDERWEIGHT";
    } if( nBMI< 24.9 ){
        cout<< "HEALTHY";
    } if( nBMI< 29.9 ){
        cout<< "OVERWEIGHT";
    } if( nBMI>= 30 ){
        cout<< "OBESE";
    }

    cout<< "\n\nCalculate new? (y/n)";
    cin>> empTy;
    if (empTy== 'y' || empTy== 'Y'){
        goto loopLoop;
    }

    return 0;
}