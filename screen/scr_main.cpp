// Exercising the Screen class
#include "screen.h"
#include <iostream>

using namespace std;

int main()
{
	Screen myScreen{6,6};
	
	// creating a 'K'
	myScreen.clear(' ');
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.move(1,6);
	myScreen.set('*');
	myScreen.move(2,4);
	myScreen.set('*');
	myScreen.move(3,2);
	myScreen.set('*');
	myScreen.back();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.move(4,2);
	myScreen.set('*');
	myScreen.move(5,4);
	myScreen.set('*');
	myScreen.move(6,6);
	myScreen.set('*');
	myScreen.display();
	
	cout << endl;
	
	myScreen.clear('#');
	myScreen.forward();
	myScreen.set('*');
	myScreen.down();
	myScreen.set('*');
	myScreen.move(3,3);
	myScreen.set("---");

	myScreen.display();
	
	cout << endl;

	myScreen.reSize(16,16);
	myScreen.display();
	myScreen.clear(' ');
	myScreen.move(7,7);
	myScreen.set("BIG");
	myScreen.move(8,5);
	myScreen.set("SCREEN");
	myScreen.display();
	
	return 0;
}

