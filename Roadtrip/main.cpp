/*
 * main.cpp
 *
 *  Created on: Sep 22, 2014
 *      Author: aezart
 */

#include <iostream>
#include "inpututils.h"
#include "Vehicle.h"
int main(){
	std::cout << "***ROADTRIP***" << std::endl;
	std::cout << "A game by Michael Stroud" << std::endl;

	double tripDistance;
	std::cout << "How long is the trip in miles?" << std::endl;
	tripDistance = inpututils::readDouble();
	std::cout << "You have " << tripDistance << " miles to cover." << std::endl;
	std::cout << "You begin at " << inpututils::tsFromQh(26) << std::endl;
	int tripTime = tripDistance/15;
	Vehicle myCar;
	for (int i = 0; i < tripTime; i++){
		std::cout << inpututils::tsFromQh(26+i) << std::endl;
		std::cout << "Traveled " << myCar.travelTick() << std::endl;
	}
	return 0;
}
