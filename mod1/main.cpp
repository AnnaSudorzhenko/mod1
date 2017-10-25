#include <iostream>
#include "draw.h"
#include "Hexagon.h"
#include "Triangle.h"

using namespace std;

void main() {
	draw* figure;
	int choise = 0;
	cout << "Hello! You can draw figure." << endl;
	cout << "1 - Triangle" << endl;
	cout << "2 - Hexagon" << endl;
	cout << "Your choise: "; cin >> choise; cout << endl;
	if (choise == 1) { figure = new Triangle(); }
	else { figure = new Hexagon(); }
	figure->draw_figure();
	system("pause");
}