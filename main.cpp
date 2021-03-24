#include "Guerrier.h"
#include "Mage.h"

int main() {
    srand(time(NULL));
    Guerrier g(1000);
    Mage m(100);
    g.test();
    m.test();
    return 0;
}
