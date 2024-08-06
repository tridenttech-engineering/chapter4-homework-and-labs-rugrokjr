//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Kendra> 

#include <iostream>
#include <iomanip> /
using namespace std;

int main() {
    
    double height = 0.0; 
    double radius = 0.0; 
    double volume = 0.0; 
    const double PI = 3.14; 

    
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    
    volume = PI * radius * radius * height;

    
    cout << fixed << setprecision(2);
    cout << "Radius: " << radius << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << volume << endl;

    
    return 0;
}
