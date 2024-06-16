#ifndef ANABOLIZANTE
#define ANABOLIZANTE

#include "../medicamento.hpp"
#include "../produto-junto-hpp/agulha.hpp"

#include <string>

using std::string;

class Anabolizante : public Medicamento {

    public:
        Agulha* agulha;

    public:

        Anabolizante(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco, Agulha *agulha);
        ~Anabolizante();
        string InformacoesProduto() override;
};

#endif