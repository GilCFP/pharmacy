#ifndef CONTROLADO
#define CONTROLADO

#include "../medicamento.hpp"

class Controlado : public Medicamento {

    public:

        Controlado(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;
        
};

#endif