#include <iostream>
#include "Locker.h"
using namespace std;
int main() {
    
        // Create a locker object on the stack
        Locker locker1; 
    // Create a locker object on the heap
    Locker* locker2 = new Locker(); 
    // Release the locker object
    delete locker2;
    return 0;
}