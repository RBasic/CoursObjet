#ifndef TEST_H
#define TEST_H


class Test
{
private:
    int val;
    int val2;

public:

    Test();
    Test(int v, int v2);

    int getVal();
    int getVal2();

    void setVal(int v);
    void setVal2(int v);

    int substract();

};

#endif // TEST_H
