#include <iostream>
#include <string>
using namespace std;

class Purchase{
    private:

        int qty, grandqty;
        float price, total, grandtotal;
        string itemName;


    public:

        Purchase(string name, int quantity, float p);
        void set_data(string name, int quantity, float p);
        void calculate();
        void print();
        void printtotal();
};

Purchase:: Purchase(string name, int quantity, float p){
    itemName= name;
    qty= quantity;
    price= p;
    
    total= 0.0;
    grandqty= 0;
    grandtotal= 0.0;
}

void Purchase:: set_data(string name, int quantity, float p){
    itemName= name;
    qty= quantity;
    price= p; 
}

void Purchase:: calculate(){

    total= qty* price;

    grandqty= grandqty+ qty;
    grandtotal= grandtotal+ total;
}

void Purchase:: print(){
    cout<< "\n========================";
    cout<< "\nSubtotal\t: "<<total<< "\n========================";
}

void Purchase:: printtotal(){
    cout<< "========================\n\tGRAND TOTAL\n========================";
    cout<< "\nTotal number of items\t\t: "<<grandqty<<"\nTotal amount to be paid\t\t: "<<grandtotal;
}

int main(){

    int num;
    float cost;
    string namaewa;
    Purchase p1("", 0, 0.0);

    while (true){
    cout<< "\n========================\n\tWELCOME\n========================\n";
    cout<< "Enter Item <'Q' to quit>\t: ";
    cin>> namaewa;
    if (namaewa== "Q"||namaewa== "q"){
        break;
    }
    cout<< "Enter quantity\t\t\t: ";
    cin>> num;
    cout<< "ENter price\t\t\t: RM";
    cin>> cost;

    p1.set_data(namaewa, num, cost);
    p1.calculate();
    p1.print();
    }

    p1.printtotal();

    return 0;
}