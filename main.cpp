#include <iostream>

using namespace std;
class Odometer {
    double a,b;
private :
    double miles ;
    double fueleffic ;
    double gallon;
public :
    	Odometer(double mile1=0,double fuel1=0){
    	miles=mile1;
    	fueleffic=fuel1;

    	}
    	void print(){
    	cout <<"Miles_driven = "<<miles<<"\nFuel efficiency= "<<fueleffic;
        cout<<endl<<"Gallons = "<<miles/fueleffic;
        cout<<endl;
    	}

    void reset();
    void totalfuel(double fuel1);
    void inputmiles(double mile1);
    double getgallons();
};


void Odometer::reset()
{
	miles = 0;
	fueleffic=0;
}

void Odometer::totalfuel(double fuel_effic)
{
	fueleffic = fuel_effic;
}

void Odometer::inputmiles(double miles_driven)
{
	miles = miles + miles_driven;

}



double Odometer:: getgallons()
{
	return miles/fueleffic;
}

int main()
{
    Odometer a (10,5);
     Odometer b (50,15);
    a.print();
        cout<<endl;
    b.print();
}
