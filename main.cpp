#include "Guerrier.h"

int main() {
    srand(time(NULL));
    Guerrier g(1000);
    Arme a1(10,1,"Physic",0,100);
    g.setArme(&a1);
    cout <<g.getPv()<<endl;
    g.showInfos();
    return 0;
}
