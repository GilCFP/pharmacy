#ifndef OFLOXACINA
#define OFLOXACINA

#include <string>
#include "../tiposDeMedicamento-hpp/antibiotico.hpp"

using std::string;

class Ofloxacina : public Antibiotico{

    public:
        Ofloxacina(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);

};

#endif