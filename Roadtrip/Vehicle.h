/*
 * Vehicle.h
 *
 *  Created on: Sep 22, 2014
 *      Author: aezart
 */

#ifndef VEHICLE_H_
#define VEHICLE_H_

class Vehicle {
public:
	Vehicle();
	virtual ~Vehicle();
	double travelTick();

private:
	double gasPerQH;
	double gasRemaining;
	double gasMax;
	double milesPerQH;

};

#endif /* VEHICLE_H_ */
