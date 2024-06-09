#define FARMACEUTICO

#include "Funcionario.hpp"

class Farmaceutico : public Funcionario
{
    public:
        Farmaceutico();
        bool verificarReceita();
};