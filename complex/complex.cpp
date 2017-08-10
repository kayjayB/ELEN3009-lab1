// complex.cpp
// Calculate quadratic formula

#include <iostream>
#include <complex> // required for the complex class
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
	char quit = 'a';
	using complexNumber =  complex<float>; // Create an alias for complex<float> called complexNumber
	complexNumber x1, x2;
	float a, b, c; 
	float determinant;
	
	while (quit != 'q') // While the user has not pressed q to quit
	{
	
		cout << "This calculator takes integers a,b and c and returns the roots of the equation. " << endl;
		cout << "Enter the value for a: " << endl;
		cin >> a;
	
		cout << "Enter the value for b: " << endl;
		cin >> b;
	
		cout << "Enter the value for c: " << endl;
		cin >> c;
	
		determinant = b*b - 4*a*c; // calculate the determinant to determine if the solution is real or real and imaginary
	
		if (determinant >= 0) // if the solution has real roots, calculate the roots
		{

			x1= (-b + sqrt(pow(b,2) - 4*a*c))/(2*a);

			x2= (-b - sqrt(pow(b,2)- 4*a*c))/(2*a);
		}
		
		else
		{
			x1= { -b/(2*a),  sqrt(-determinant)/(2*a)};  // if the solution has non real roots, calculate the real and imaginary components of the roots
			x2 ={ -b/(2*a),  -sqrt(-determinant)/(2*a)}; 
			
		}

		cout <<  x1 << endl;
		cout <<  x2 << endl;

		cout << "Press q to quit, or any other letter to calculate a new solution" << endl;
		cin >> quit;
	}
	    return 0;
}
