#ifndef DIPIRONA
#define DIPIRONA

#include <string>
#include "../tiposDeMedicamento-hpp/analgesico.hpp"

using std::string;

class Dipirona : public Analgesico{

    public:
        Dipirona(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;
};

#endif