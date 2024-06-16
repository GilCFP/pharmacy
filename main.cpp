#include "Sistema/Sistema.hpp"

int main(){
    Vendedor v1("gil", 75, 1);
    Farmaceutico f1("luidao", 17, 2);
    Gerente g1("jao", 12, 3);

    Sistema s1(&v1, &f1, &g1);
    s1.iniciar();
}