// complex.cpp
// Multiplying complex numbers

#include <iostream>
#include <complex> // required for the complex class

using namespace std;

int main()
{
    complex<float> num1{ 2.0, 2.0 };  // using C++11 uniform initialisation syntax
    complex<float> num2{ 4.0, -2.0 }; // old syntax: complex<float> num2(4.0,-2.0);
	

    auto answer = num1 * num2; // using C++11 auto keyword,
                               // answer is of type: complex<float>

    cout << "The answer is: " << answer << endl;
    cout << "Or in a more familiar form: " << answer.real() << " + " << answer.imag() << "j" << endl;

	// answer++; 
	//answer is a complex number. A complex number is made up of real(.real()) and imaginary(.imag()) parts
	//It is effectively a variable that stores numbers in two vector elements.
	//If one merely attempts to increment the variable answer by 1, it is not known which element should be incremented
	//Instead, the code should specify whether the imaginary part or the real part needs to be incremented.

    return 0;
}
