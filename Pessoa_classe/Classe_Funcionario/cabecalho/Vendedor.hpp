#define VENDEDOR

#include "Funcionario.hpp"

class Vendedor : public Funcionario
{
    public:
        Vendedor();
        float cobrar();
};