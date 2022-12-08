#include "iostream"
#include "./extended-math.h"
using namespace std;

int main() {
    ExtendedMath e_math = ExtendedMath(); 
    cout << "Hey this is the beginning!" << endl;
    int random_number = e_math.generate_random_number(1, 12);
    cout << "The random number "<< random_number << endl;
    cout << "Hello" << endl;
    cout << "The double factorial of " << random_number << " is " << e_math.double_factorial(random_number) << endl;
}