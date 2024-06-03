#ifndef ANABOLIZANTE
#define ANABOLIZANTE

#include "../medicamento.hpp"

#include <string>

using std::string;

class Anabolizante : public Medicamento {

    public:

        Anabolizante(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;

};

#endif