/*
 * Vehicle.cpp
 *
 *  Created on: Sep 22, 2014
 *      Author: aezart
 */

#include "Vehicle.h"

Vehicle::Vehicle() {
	milesPerQH = 15;
	gasPerQH = .5;
	gasMax = 17;
	gasRemaining = gasMax;

}

Vehicle::~Vehicle() {
	// TODO Auto-generated destructor stub
}

double Vehicle::travelTick(){
	if (gasRemaining >= gasPerQH){
		gasRemaining -= gasPerQH;
	}else{
		gasRemaining = 0;
		return milesPerQH * (gasRemaining/gasPerQH);
	}
	return milesPerQH;
}
