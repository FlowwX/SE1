#include <iostream>
#include "HightSensorStub.h"
#include "HightChecker.h"
#include "States.h"





int main()
{
    HightChecker *hc = new HightChecker();

    HcState *s = hc->getState();

    std::cout << s->getName() << std::endl;
}
