#include <iostream>

class Fraction{ //yg ni class.
    private:
        int numerator, denominator; //Yg ni Data mmbrs.

    public:
        Fraction(){

        }

        Fraction (int numerator, int denominator){ //yg ni constructor.
            this-> numerator= numerator;
            this-> denominator= denominator;
        }

        Fraction add(Fraction f){

            Fraction result;
            result.numerator= (numerator* f.denominator)+(f.numerator*denominator);
            result.denominator= (denominator* f.denominator);

            return result;
        }

        Fraction multiply(Fraction f){
            Fraction result;
            result.numerator= numerator* f.numerator;
            result.denominator= denominator* f.denominator;

            return result;
        }

        void display(){
            std::cout<<numerator<< "/"<< denominator<< std::endl;
        }
};

int main() {

    Fraction f1(3, 4);
    Fraction f2(1, 2);
    Fraction result;

    std::cout << "f1: ";
    f1.display();

    std::cout << "f2: ";
    f2.display();

    std::cout << "f1 + f2: ";
    result = f1.add(f2);
    result.display();

    std::cout << "f1 * f2: ";
    result = f1.multiply(f2);
    result.display();

    return 0;
}