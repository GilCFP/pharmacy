#include "Sistema/Sistema.hpp"

int main(){

    Receita receita("ritalina", 1, true);
    Controlado controlado("5ml", true, "ritalina", 1, 40.00);

    receita.associarMed(&controlado);

    Vendedor v1("gil", 75, 1);
    Farmaceutico f1("luidao", 17, 2);
    Gerente g1("jao", 12, 3);
    Cliente c1("Germano", 12);

    c1.addReceita(receita);

    c1.verReceitas();

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