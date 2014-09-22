/*
 * inpututils.cpp
 *
 *  Created on: Sep 22, 2014
 *      Author: aezart
 */
#include "inpututils.h"
#include <iostream>
#include <sstream>

namespace inpututils{
	double readDouble(){
		std::string userIn;
		std::cin >> userIn;
		while (!inpututils::isDouble(userIn)){
			std::cin >> userIn;
		}
		std::istringstream userInStream(userIn);
		double d;
		userInStream >> d;
		return d;
	}

	bool isDouble(std::string userIn){
		const char *strChars = userIn.c_str();
		unsigned int decimalCount = 0;
		for (unsigned int i = 0; i < userIn.length(); i++){
			if (strChars[i] == '-' && i != 0){
				return false;
			}
			if (strChars[i] == '.'){
				++decimalCount;
				if (decimalCount > 1){
					return false;
				}
			}
			if ((strChars[i] < '0' || strChars[i] > '9') && strChars[i] != '-' && strChars[i] != '.'){
				return false;
			}
		}
		return true;
	}

	std::string tsFromQh(int qhTime){
		int hours = qhTime/4;
		int min = (qhTime%4)*15;
		std::stringstream tssTime;
		tssTime << hours << ":" << min;
		if (min == 0){
			tssTime << 0;
		}
		return tssTime.str();
	}
}
