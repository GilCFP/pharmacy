#ifndef BOLDENONA
#define BOLDENONA

#include <string>
#include "../tiposDeMedicamento-hpp/anabolizante.hpp"

using std::string;

class Boldenona : public Anabolizante{

    public:
        Boldenona(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);
        string InformacoesProduto() override;


};

#endif