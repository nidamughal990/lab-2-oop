#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle()  {
	length=1.0;
	width=1.0;}

    // Parameterized constructor
    Rectangle(float l, float w) {
	length=l;
	width=w;}

    // Single-parameter constructor (for square)
    Rectangle(float side){
	
	length=side;
	 width=side;
}
    // Method to calculate area
    float area() const {
        return length * width;
    }

    // Method to display dimensions and area
    void display() const {
        cout << "Length: " << length <<endl;
		 cout <<"Width: " << width << endl;
		 
		 cout<<" Area: "<< area() << endl;
		 
    }
};
