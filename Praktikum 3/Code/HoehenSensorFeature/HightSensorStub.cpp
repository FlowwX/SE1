#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include "HightSensorStub.h"

HightSensorStub::HightSensorStub(void){
    index=0;
    size=0;
    values = new int[INIT_SIZE];
}

int HightSensorStub::nextValue() {
	return values[index++];
}

int HightSensorStub::getSize() {
	return size;
}

void HightSensorStub::readValuesFromFile(const char* path) {

    int index = 0;

    std::ifstream file(path);
    std::string str;

    while (std::getline(file, str))
    {
        std::string subString = str.substr(str.length()-4, 4);
        values[index] = std::atoi( subString.c_str() );
        index++;
    }

    size = index;
}
