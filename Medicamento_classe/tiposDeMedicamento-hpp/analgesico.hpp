#ifndef ANALGESICO
#define ANALGESICO

#include "../medicamento.hpp"

class Analgesico : public Medicamento {

    public:

        Analgesico(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;

};

#endif