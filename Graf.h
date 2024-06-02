#ifndef Graf_h
#define Graf_h
class Graf
{
private:
    /* data */
    /*nodes array*/
    //int testArray[3] = {1, 2, 3};
    int a;
    virtual int getA();
public:
    int getNodes(){return a;}
    Graf(){
    a = getA();
    }
};

#endif

