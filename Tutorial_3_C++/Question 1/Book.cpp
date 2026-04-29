//MODULE 4
#include <iostream>
#include <string>
using namespace std;
    
class Book{

    private: //access specifier (private/ public/ protected)

        string tItle, cUrrency;  //data members (data kena guna dalam class)
        float pRice;

    public:

        Book(string a_title, float a_price, string a_currency){
            tItle= a_title;
            pRice= a_price;
            cUrrency= a_currency;
        } //since data members are private, this function untuk buat data private sama dgn data luar.

        float getPrice(){ // return price inRM
            if (cUrrency== "USD"){
                pRice= pRice*(237.5/ 50);
            }
            return pRice;
        }

        string getTitle(){ // return title of book
            return tItle;
        }

        void showPriceTitle(){ // display price in RM
            cout<< "\nTitle of book : "<< getTitle();
            cout<< "\n Price in RM = "<< getPrice();
        }
    

};

int main()
{
    Book b1("C++ is Fun", 50.0, "RM");
    cout <<"\n I just bought the book " << b1.getTitle();
    b1.showPriceTitle();

    cout <<endl ;
    Book b2("Snow White", 50.0, "USD");
    cout <<"\n I just bought the book "  << b2.getTitle();
    b2.showPriceTitle();
}
