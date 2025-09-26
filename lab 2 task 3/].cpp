#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    
    Rectangle rect1;          
    Rectangle rect2(4.0, 5.0); 
    Rectangle rect3(3.0);     

    // Display their dimensions and area
    cout << "Rectangle 1:" << endl;
    rect1.display();
    
    cout << "Rectangle 2:" << endl;
    rect2.display();
    
    cout << "Rectangle 3:" << endl;
    rect3.display();

    return 0;
}