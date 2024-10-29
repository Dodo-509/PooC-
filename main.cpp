#include <iostream>
#include "point.h"

using namespace std;

int main(int argc, char** argv) {
	
	Point point1(0.0, 0.0);
	point1.affiche();
	point1.deplace(5.6,9.8);
	point1.affiche();
	return 0;
}