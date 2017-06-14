#include "States.h"
#include "HightChecker.h"

void Idle::onGroundSignal(HightChecker* hc){
    //do nothing
}

void Idle::onHighSignal(HightChecker* hc){

}

void Idle::onLowSignal(HightChecker* hc){

}

void Idle::onMidSignal(HightChecker* hc){
    hc->setState(new Z1());
}

std::string Idle::getName(){
    return "IDLE";
}
