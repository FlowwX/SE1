class HcState;

class HightChecker
{
    private:
        HcState *state;

    public:
        HightChecker(void);
        void setState(HcState*);
        HcState* getState();
};
