#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>


#define SENSOR_FILE "../../Logs/processlog1.txt"
#define INIT_SIZE 500

int main()
{
    HightSensorStub.readValuesFromFile(SENSOR_FILE);
}
