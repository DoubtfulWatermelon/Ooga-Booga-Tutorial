#include <iostream>
using namespace std;

void roBux(int w);
void drawFullLine(int w);
void drawEmptyLine(int w);

int main(){

    int width;
    repeat:
    cout<< "Enter the length of the side of the square between 1 to 20\n(any other value to the end): ";
    cin>> width;
    if(width>20 || width<1){
        cout<< "Ending program. Only integer values between 1 and 20 accepted";
        return 0;
    }
    roBux(width);

    goto repeat;
    return 0;
}

void roBux(int w){

    int row, col;

    for(row= 1; row<= w; row++){
        for(col= 1; col<= w; col++){
            if(row== 1 || row== w){
                drawFullLine(w);
                
            } else {
                if(col== 1 || col== w){
                    drawFullLine(w);
                } else {
                    drawEmptyLine(w);
                }
            }
        }
        cout<<"\n";
    }
}

void drawFullLine(int w){
    cout<< "* ";
}

void drawEmptyLine(int w){
    cout<< "  ";
}