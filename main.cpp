#include "Sistema/Sistema.hpp"

int main(){

    Vendedor v1("gil", 75, 1);
    Farmaceutico f1("luidao", 17, 2);
    Gerente g1("jao", 12, 3);
    Cliente c1("Germano", 12);


    Sistema s1(&v1, &f1, &g1);

    //Inicia o sistema do lado do gerente
    s1.iniciar(&g1);

    std::cout << "Estoque:\n"<<std::endl;
    s1.verEstoque();

    //Inicia um processo de compra com um cliente
    s1.comprar(&c1);

    std::cout << "Estoque:\n"<<std::endl;
    s1.verEstoque();

}