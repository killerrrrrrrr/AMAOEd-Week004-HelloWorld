#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
    // Part 2
    // we start of by writing a function

// return type //Funtion name // parameter //body
void displayProduct (int a, int b) {
    // we copy our text
    cout << "The product of " << a << " and " << b << " is " << a*b << endl;
    // since the variable we used previously is still "a" and "b"
    // there is no need to rename them.
    // now, the value of "a" and "b" will come from the parameter
}

int main () {
    // Part 1
    // usually we writee all our codes within the int main ()
    // like this

    // int a = 50;
    // int b = 115;

    // cout << "The product of " << a << " and " << b << " is " << a*b << endl;


    // There we are able to display the products of the two variables..
    // however, we are not limited to the int main ().
    // we can place our code elsewhere and call it several times..

    // Part 3
    // Let us call our function..
    displayProduct(50,115);
    // We got the same result 
    // The power of function is repetition..
    // Let us exploit that!

    displayProduct(2,3);
    displayProduct(9,2);
    displayProduct(3,15);
    displayProduct(7,4);
    displayProduct(0,5);
    // We use random but verifiable value..

    // there, we have used the function repeatedly without writing too much code.

    system("PAUSE");
    return EXIT_SUCCESS;
}