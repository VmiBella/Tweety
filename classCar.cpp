#include <iostream>
#include <string>
using namespace std;

// skapa en class car och skapa en konstruktor

class Car {
public:
    string brand;
    string model;
    int year;
    double mileage;

    Car(string b, string m, int y, double mil) : brand(b), model(m), year(y), mileage(mil) {}

// skapar en void drive för att köra en sträcka och adda sträckan till mileage. en void display för att visa information om bilen

    void drive(double distance){
        mileage += distance;
    }

    void displayInfo() const {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << "km" << endl;

    }
    
// returnera year och mileage. year kan inte ändras så const. mileage kommer att ändras.

    int getYear() const {
        return year;
    }

    double getMileage(){
        return mileage;
    }


};


/* Skapa ett huvudprogram (main) där du:

    Skapar ett objekt av klassen Car.
    Använder metoderna för att visa information om bilen, köra en viss sträcka och sedan visa den uppdaterade informationen.*/

int main (){

    Car myCar("Audi", "Quattro", 2017, 100000);

    cout << "Car information: " << endl;
    myCar.displayInfo();

    cout << "Driving the car 200 km" << endl;
    myCar.drive(200);

    cout << "New car information: " << endl;
    myCar.displayInfo();
 
    return 0;

}