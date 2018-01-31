/*
 * constants.h
 *
 *  Created on: Jan 26, 2018
 *      Author: keith
 */

#ifndef CONSTANTS_H_
#define CONSTANTS_H_

namespace KP{
	//default return types
	const int 			SUCCESS			 				=  0;
	const int 			FAIL							=  SUCCESS - 1;
	const int 			COULD_NOT_OPEN_FILE				=  SUCCESS - 2;
	const int			UNIMPLEMENTED					=  SUCCESS - 3;
	
	
	enum SORT_ORDER { CPU_TIME, PROCESS_NUMBER, START_TIME };
}

#endif /* CONSTANTS_H_ */
