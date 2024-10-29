#include <iostream>
#include "point.h"

using namespace std;

Point::Point (float x, float y) {
			this->x = x;
			this->y = y;
		}	
		
void Point::deplace(float x, float y) {
			this->x += x;
			this->y += y;
		}
		
void Point::affiche() {
			cout<<"("<<x<<", "<<y<<")"<<endl;
		}
