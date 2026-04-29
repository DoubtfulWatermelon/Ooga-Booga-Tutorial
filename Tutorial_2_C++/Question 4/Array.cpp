#include <iostream>
using namespace std;

void getMinMax(int* p_array, int size, int &a_min, int &a_max);
void showArray(int* p_array, int size);

int main()
{
    int myArray[]= {3, 200, 11, 2};
    int min= 10000, max= 0;
    int numItem= sizeof(myArray)/sizeof(int);
    showArray(myArray, numItem);
    getMinMax(myArray, numItem, min, max);
    cout<< "\n The maximum = "<< max;
    cout<< "\n The minimum = "<< min;
    return 1;
}

void getMinMax(int* p_array, int size, int &a_min, int &a_max){
    for(int m= 0; m< size; m++){
        if(p_array[m]>a_max){
            a_max= p_array[m];
        } else if(p_array[m]<a_min){
            a_min= p_array[m];
        }
    }
}

void showArray(int* p_array, int size){
    cout<<"\nValue of array\n";
    for(int n= 0; n< size; n++){
        cout<< p_array[n]<< "\t";
    }


}