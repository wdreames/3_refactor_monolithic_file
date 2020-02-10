//============================================================================
// Name        : 3_refactor_monolithic_file.cpp
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : partial of project1 for OS
//============================================================================
#include <iostream>
#include <vector>
#include "../includes_usr/constants.h"
#include "../includes_usr/utilities.h"

using namespace std;
using namespace Variables;

int main() {
	cout << "The code works!";

	int iRet = FAIL;

	//load data
	iRet = loadData(SOURCE_FILE);
	if (iRet != SUCCESS)
		return iRet;

	//sort the data
	sortData(START_TIME);

	//save remains
	iRet = saveData(RESULTS_FILE);
	return iRet;
}
