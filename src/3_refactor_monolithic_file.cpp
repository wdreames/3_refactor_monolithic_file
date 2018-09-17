//============================================================================
// Name        : 3_refactor_monolithic_file.cpp
// Author      : 
// Version     :
// Copyright   : Steal this code!
// Description : partial of project1 for OS
//============================================================================
#include <iostream>
#include <vector>

using namespace std;

//default filenames for test
const char* const 	SOURCE_FILE = "testdata.txt";
const char*	const	RESULTS_FILE = "results.txt";
//default return types
const int 			SUCCESS			 				=  0;
const int 			FAIL							=  SUCCESS - 1;
const int 			COULD_NOT_OPEN_FILE				=  SUCCESS - 2;
const int			UNIMPLEMENTED					=  SUCCESS - 3;


enum SORT_ORDER { CPU_TIME, PROCESS_NUMBER, START_TIME };


//attempt to open file 'filename' and read in all data
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int loadData(const char* filename){
	//fill in
	return UNIMPLEMENTED;
}

//attempt to create or open file 'filename' to write all data to  
//returns SUCCESS if all goes well or COULD_NOT_OPEN_FILE
int saveData(const char* filename){
	//fill in
	return UNIMPLEMENTED;
}

//sorts data based on mySortOrder (thats what void means)
void sortData(SORT_ORDER mySortOrder){
	//fill in
}
int main() {
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
