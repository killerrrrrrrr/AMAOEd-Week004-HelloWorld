#include <iostream>


using namespace std;

int main () {

    int myVar = 23;
    int *myPointer = &myVar;

    // Print the address of the varibale assigned to pointer
    cout << myPointer << endl;

    // Print the pointer's variable current value
    cout << (*myPointer) << endl;

    // Assigning new value to the current pointer's variable
    (*myPointer) = 15;
    cout << myVar << endl;


    // ------------------------------
    // Another example (Showing flexibility/possibilities)

    cout << "Another example (Showing flexibility/possibilities)" << endl;

    int variable1 = 5;
    int variable2 = 10;
    int *pointer1 = &variable1;
    int *pointer2 = &variable1;

    cout << *pointer1 << endl;
    cout << *pointer2 << endl;

    pointer2 = &variable2;
    cout << *pointer2 << endl;

    *pointer2 = 23;
    cout << variable2 << endl;

    pointer1 = pointer2;
    cout << *pointer1 << endl;

    // ------------------------------
    //  Pointer Arithmetic

    cout << "Pointer Arithmetic" << endl;

    int myInt = 9;
    // int *myIntPtr = &myInt;
    int *myIntPtr = new int[5];

    cout << myIntPtr << endl;

    for(int i = 0; i < 5; i++)
       myIntPtr[i] = i * 2;

    for(int i = 0; i < 5; i++)
        cout << myIntPtr[i] << endl;

    for (int *p = myIntPtr; p < myIntPtr + 5; p++)
        cout << *p << endl;

    // delete myIntPtr;
    delete [] myIntPtr;


    /* 
    
    https://www.geeksforgeeks.org/pointers-vs-references-cpp/
    https://www.youtube.com/@JamieKingCS/featured 
    
    */


    return 0;

}