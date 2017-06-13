#include "HightSensorStub.h"

HightSensorStub::HightSensorStub(void){
    index=0;
    values = new int[INIT_SIZE];
}

int HightSensorStub::nextValue() {
	// TODO - implement HightSensorStub::nextValue
	throw "Not yet implemented";
}

void HightSensorStub::readValuesFromFile(std::string path) {

    int index = 0;

    std::ifstream file(path);
    std::string str;

    while (std::getline(file, str))
    {
        std::string subString = str.substr(str.length()-4, 4);


        values[index] = std::atoi( subString.c_str() );

        std::cout << values[index] << std::endl;

        index++;
    }

    std::cout << "Elemente" << index << std::endl;
}
