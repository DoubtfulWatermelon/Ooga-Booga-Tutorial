#include <iostream>
using namespace std;

int factorial(int num);

int main ()
{

    int x=4;
    cout<< "\n Factorial of "<< x<< "= "<< factorial(x);

    return 0;
}

int factorial(int num)
{
    int factorial= num;

    for (int count= num-1; count>0; count--){
        factorial= factorial* count;
    }
    num= factorial;
    
    return num;
}