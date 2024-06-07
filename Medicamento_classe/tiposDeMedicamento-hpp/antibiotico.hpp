#ifndef ANTIBIOTICO
#define ANTIBIOTICO

#include "../medicamento.hpp"

class Antibiotico : public Medicamento {

    public:

        Antibiotico(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);

};


#endif