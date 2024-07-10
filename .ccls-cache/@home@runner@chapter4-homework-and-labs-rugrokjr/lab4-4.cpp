//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by <Kendra> 
double height   = 0.0;
double radius   = 0.0;
double volume   = 0.0;

cout << "Height: ";
cin << height;
cout << "Radius: " ;
cin << radius;

volume = PI * radius * radius * height;

cout << "Volume: " << volume << endl;
return 0;
using namespace std;

make clean;
make lab4-4;
./lab4-4;


