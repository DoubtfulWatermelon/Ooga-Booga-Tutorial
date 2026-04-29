#include <iostream>
#include <vector>
using namespace std;

void displayVector(float *a_array, int numElem);
void getInputIntoVector(float *a_array, int numElem);

int main(){

    int numNumber;

    cout<< "\n Enter how many numbers to enter >> ";
    cin>> numNumber;

    float *woahCustomarray= new float[numNumber];
//"create an array which size is decided by the input, and let the array point towards it."
//sbb "int Array[num];"" cannot be used since the spaces in an array has to be known during declaration.
  
    getInputIntoVector(woahCustomarray, numNumber);
    displayVector(woahCustomarray, numNumber);

     delete[] woahCustomarray;

    return 0;
}

void displayVector(float *a_array, int numElem){ //function isnt in the form to use vectors in it, thus vectors couldnt be used in the function.

    cout<< "\n Number of elements in array = "<< numElem;
    cout<< "\n Display data in array\n";

    for (int uuhMazinga= 0; uuhMazinga< numElem; uuhMazinga++){
        cout<< a_array[uuhMazinga]<<" ";
    }
}

void getInputIntoVector(float *a_array, int numElem){ 

    for (int aMazing; aMazing< numElem; aMazing++){

        cout<< "\n Enter element A["<< aMazing<<"] = ";
        cin>> a_array[aMazing];
    }
}