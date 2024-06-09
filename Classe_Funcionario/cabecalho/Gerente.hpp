#define GERENTE
#include "Farmaceutico.hpp"
#include "Vendedor.hpp"

class Gerente : public Vendedor, public Farmaceutico
{
    public:
        Gerente();
};