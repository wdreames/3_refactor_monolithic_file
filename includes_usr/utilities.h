/*
 * utilities.h
 *
 *  Created on: Jan 26, 2018
 *      Author: keith
 */

#ifndef UTILITIES_H_
#define UTILITIES_H_
#include "constants.h"

//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int loadData(const char* filename);

//attempt to create or open file 'filename' to write all data to  
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const char* filename);

//sorts data based on mySortOrder (thats what void means)
void sortData(KP::SORT_ORDER mySortOrder);

#endif /* UTILITIES_H_ */
