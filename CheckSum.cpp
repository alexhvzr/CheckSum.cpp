/*
 * CheckSum.cpp
 *
 *  Created on: Oct 7, 2018
 *      Author: Alex
 */

#include "CheckSum.h"
#include <iostream>
#include <string>
#include <fstream>


using namespace std;
namespace std {

CheckSum::CheckSum() {
	// TODO Auto-generated constructor stub

}

CheckSum::~CheckSum() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */

int32_t countSum(string str){
	int32_t sum=0;
	//loops through the string and adds the character value to sum
	for (int i = 0; i < str.length(); i++) {
			sum += str[i];
		}
	return sum;
}


int main(int argb, char* argc[]){
	//checks to see if argument was passed
	if(argb > 1){
		//outputs file name
		cout << "argc[1] = " << argc[1]	<<endl;
	} else {
		//Couldn't find file error message
		cout << "No file name entered. Exiting...";
		        return -1;
	}
	//take in file
	ifstream inFile(argc[1]);

	    if (inFile.is_open() && inFile.good()) {
	        //this loop take each line and adds it to the input string, using the buffer to grab the line
	    	string input, buffer;
	        while (getline(inFile, buffer)){
	        	input.append(buffer);
	        }
	        cout <<"The check sum of the file as a int32_t = "<<countSum(input);
	    } else {
	        cout << "Failed to open file..";
	    }


	return 0;
}
