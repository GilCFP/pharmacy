#ifndef ANDROXON
#define ANDROXON

#include <string>
#include "../tiposDeMedicamento-hpp/anabolizante.hpp"

using std::string;

class Androxon : public Anabolizante{

    public:
        Androxon(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);

};

#endif