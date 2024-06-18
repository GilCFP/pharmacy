#ifndef GERENTE
#define GERENTE

#include "Farmaceutico.hpp"
#include "Vendedor.hpp"

class Gerente : public Vendedor, public Farmaceutico
{
    public:
        Gerente(string nome, int idade, int codigo);
        ~Gerente();
};
#endif