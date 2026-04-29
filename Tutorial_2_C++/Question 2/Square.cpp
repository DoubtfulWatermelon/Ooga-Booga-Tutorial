#include <iostream>
using namespace std;

int main(){

    int length;

    repeat:

    cout<< "Enter the length of the side of the square between 1 to 20\n(any other value to the end): ";
    cin>> length;

    if(length>20 || length<1){
        cout<< "Ending program. Only integer values between 1 and 20 accepted";
        return 0;
    }

    for(int l= 1; l<= length; l++){
        for(int h= 1; h<= length; h++){
            cout<< "* ";
        }
        cout<<"\n";
    }

    goto repeat;

    return 0;
}