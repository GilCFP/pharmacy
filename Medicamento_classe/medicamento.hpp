#ifndef MEDICAMENTO
#define MEDICAMENTO

#include "../Produto_classe/Produto/produto.hpp"
#include <string>

using std::string;

class Medicamento : public Produto {

    protected:

        string prescricao;
        bool precisaDeReceita;

    public:

        Medicamento(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);
        string getPrescricao();

};

#endif