/*
Tobi Wainwright - 9/21/2017 Period 4
Assignment name: Display Text
display full name, period, and hello world.
*/
//Libraries
#include <iostream>
#include <conio.h>
//Namespaces
using namespace std;
//Functions
void pause() {
	cout << "Press Any Key to Continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

//main
void main() {
	int period;
	period = 4;
	cout << "My Name is Tobi Wainwright, im in period " << period << endl;
	cout << "Hello World!" << endl;
	pause();
	return;

}