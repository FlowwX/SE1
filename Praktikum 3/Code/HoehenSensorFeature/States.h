#include <iostream>

class HightChecker;

class HcState {


public:
	void onHighSignal(HightChecker*);

	void onLowSignal(HightChecker*);

	void onMidSignal(HightChecker*);

	void onGroundSignal(HightChecker*);

	std::string getName();
};

class Idle: public HcState{
    public:
        void onHighSignal(HightChecker*);

        void onLowSignal(HightChecker*);

        void onMidSignal(HightChecker*);

        void onGroundSignal(HightChecker*);

        std::string getName();
};

class Accept: public HcState{
    public:
        void onHighSignal(HightChecker*);

        void onLowSignal(HightChecker*);

        void onMidSignal(HightChecker*);

        void onGroundSignal(HightChecker*);

        std::string getName();
};

class Error: public HcState{
    public:
        void onHighSignal(HightChecker*);

        void onLowSignal(HightChecker*);

        void onMidSignal(HightChecker*);

        void onGroundSignal(HightChecker*);

        std::string getName();
};

class Z1: public HcState{
    public:
        void onHighSignal(HightChecker*);

        void onLowSignal(HightChecker*);

        void onMidSignal(HightChecker*);

        void onGroundSignal(HightChecker*);

        std::string getName();
};

class Z2: public HcState{
    public:
        void onHighSignal(HightChecker*);

        void onLowSignal(HightChecker*);

        void onMidSignal(HightChecker*);

        void onGroundSignal(HightChecker*);

        std::string getName();
};

class Z3: public HcState{
    public:
        void onHighSignal(HightChecker*);

        void onLowSignal(HightChecker*);

        void onMidSignal(HightChecker*);

        void onGroundSignal(HightChecker*);

        std::string getName();
};
