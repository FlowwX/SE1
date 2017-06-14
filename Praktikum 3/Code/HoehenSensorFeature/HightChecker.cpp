#include <iostream>
#include "HightChecker.h"
#include "States.h"

HightChecker::HightChecker(){
    state = new Idle();
};

void HightChecker::setState(HcState* hc){
    state = hc;
}

HcState* HightChecker::getState(){
    return state;
}
