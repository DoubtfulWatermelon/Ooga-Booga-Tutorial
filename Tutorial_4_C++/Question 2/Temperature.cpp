#include <iostream>
using namespace std;

class Temperature {
    private:
        //Declare you data members here
        double tempCel;
        double tempFar;

    public:
        Temperature() {
            tempCel= 0;
            tempFar= 32;
        } // complete this constructor

        // Declare/define other public members/functions here,
        // as per the instructions given in the abovementioned
        // question.

        Temperature(char ooga_type, double booga_value) {

            if (ooga_type== 'C' || ooga_type== 'c') {
                tempCel= booga_value;
                tempFar= (booga_value * 9.0 / 5.0) + 32;

            } else if (ooga_type== 'F' || ooga_type== 'f') {
                tempFar= booga_value;
                tempCel= (booga_value - 32) * 5.0 / 9.0;

            } else {
                // Default values if invalid input
                tempCel= 0;
                tempFar= 32;
            }
        }

        // Return Celsius value
        double getCels() {
            return tempCel;
        }

        // Return Fahrenheit value
        double getFar() {
            return tempFar;
        }

        // Copy values from another Temperature object
        void equal(Temperature t) {
            tempCel = t.tempCel;
            tempFar = t.tempFar;
        }
};

// Driver program 
int main()
{
    Temperature t1('C',100), t2('F',100);

    cout << "t1 = " << t1.getCels() << " C\n";
    cout << "t1 = " << t1.getFar() << " F\n";

    cout << "t2 = " << t2.getCels() << " C\n";
    cout << "t2 = " << t2.getFar() << " F\n";

    t1.equal(t2);   // assign booga_value in t2 to t1
    cout << "After assigning t2 to t1" << endl;

    cout << "t1 = " << t1.getCels() << " C\n";
    cout << "t1 = " << t1.getFar() << " F\n";

    return 0;
}