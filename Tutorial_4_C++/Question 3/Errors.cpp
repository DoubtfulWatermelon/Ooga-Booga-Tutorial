#include <iostream>
#include <string>
using namespace std;

class Animal
{ 
private:
    double aWeight=0; 
    string aSpecies;
    string aCommonName;
    static int numOfAnimal; 

public:
    Animal(string inSpecies, string inName)
    {

        numOfAnimal++;
        aSpecies = inSpecies;
        //no ";" at the end of line.
        aCommonName = inName;
        //no ";" at the end of line.
        cout << "\n Number of animal created = " << numOfAnimal;
    }
    
    
    string getSpecies() { return aSpecies; }
    //used "void" instead of "string" as function return variable.

    void setWeight(double inWeight);
    //member function written 'outside' hasnt been declared inside.
};

void Animal::setWeight(double inWeight)
{
    inWeight = aWeight ; 
    //no variable needs to be returned. (was float Ani- now void Ani-).
}


int Animal::numOfAnimal = 0; // no error

//no error in main()
int main(void)
{
    Animal alienAnimal("Elephas Maximus", "Asian Elephant");

    alienAnimal.setWeight(2000.0); 

    cout << "\nElephant is of the type " << alienAnimal.getSpecies() << endl;
}