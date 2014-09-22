/*
 * inpututils.h
 *
 *  Created on: Sep 22, 2014
 *      Author: aezart
 */

#include <iostream>
#ifndef INPUTUTILS_H_
#define INPUTUTILS_H_
namespace inpututils{
	double readDouble();
	bool isDouble(std::string);
	std::string tsFromQh(int qhTime);
}




#endif /* INPUTUTILS_H_ */
