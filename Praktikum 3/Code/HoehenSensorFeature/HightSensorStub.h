#define INIT_SIZE 500
#define SENSOR_FILE "../../Logs/processlog1.txt"

class HightSensorStub {

private:
	int *values;
	int index;
    int size;

public:
    HightSensorStub(void);
	int nextValue();
	int getSize();

	void readValuesFromFile(const char* path);
};
