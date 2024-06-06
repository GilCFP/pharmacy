#ifndef DURATESTON
#define DURATESTON

#include <string>
#include "../tiposDeMedicamento-hpp/anabolizante.hpp"

using std::string;

class Durateston : public Anabolizante{

    public:
        Durateston(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);

        string InformacoesProduto() override;
};

#endif