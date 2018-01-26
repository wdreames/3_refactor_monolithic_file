//============================================================================
// Name        : 3_refactor_monolithic_file.cpp
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : partial of project1 for OS
//============================================================================
#include <iostream>
#include <vector>
#include "constants.h"
#include "utilities.h"

using namespace std;
using namespace KP;

//default filenames for test
const char* 		SOURCE_FILE = "testdata.txt";
const char*		 	RESULTS_FILE = "results.txt";

int main() {
	int iRet = FAIL;

	//load data
	iRet = KP_U::loadData(SOURCE_FILE);
	if (iRet != SUCCESS)
		return iRet;

	//sort the data
	KP_U::sortData(START_TIME);

	//save remains
	iRet = KP_U::saveData(RESULTS_FILE);
	return iRet;
}
