#include "Test.h"

Test::Test(){
    val = 0;
    val2 = 0;
}

Test::Test(int v, int v2){
    val = v;
    val2 = v2;
}


int Test::getVal(){
    return val;
}
int Test::getVal2(){
    return val2;
}
void Test::setVal(int v){
    val = v;
}
void Test::setVal2(int v){
    val = v;
}

int Test::substract(){
    int temp = getVal2() - getVal();
    return temp;
}

    //int substract();


//int getVal();
