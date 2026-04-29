#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<float> &OogaBooga, int numElem);
void getInputIntoVector(vector<float> &oogaBooga, int numElem);

int main(){

    float inputWhat;
    int numNumber;
    vector <float> woahCustomvector; //Create an empty vector of integers.

    cout<< "\n Enter how many numbers to enter >> ";
    cin>> numNumber;

    getInputIntoVector(woahCustomvector, numNumber);
    displayVector(woahCustomvector, numNumber);

    return 0;
}

void displayVector(vector<float> &oogaBooga, int numElem){ //function isnt in the form to use vectors in it, thus vectors couldnt be used in the function.

    cout<< "\n Number of elements in array = "<< numElem;
    cout<< "\n Display data in array\n";

    for (float uhhMazinga : oogaBooga){
        cout<< uhhMazinga<<" ";
    }
}

void getInputIntoVector(vector<float> &oogaBooga, int numElem){ 

    float tambahBoss;
    for (int aMazing; aMazing< numElem; aMazing++){

        cout<< "\n Enter element A["<< aMazing<<"] = ";
        cin>> tambahBoss;
        oogaBooga.push_back(tambahBoss);
    }
}