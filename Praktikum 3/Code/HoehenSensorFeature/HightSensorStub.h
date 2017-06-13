#include <string>

class HightSensorStub {

private:
	int *values[];
	int index;

	HightSensorStub(void);

public:
	int nextValue();

	void readValuesFromFile(std::string);
};
