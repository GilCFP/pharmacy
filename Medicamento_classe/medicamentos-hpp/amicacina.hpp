#ifndef AMICACINA
#define AMICACINA

#include <string>
#include "../tiposDeMedicamento-hpp/antibiotico.hpp"

using std::string;

class Amicacina : public Antibiotico{

    public:
        Amicacina(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);

};

#endif