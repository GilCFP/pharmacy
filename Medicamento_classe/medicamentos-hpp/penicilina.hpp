#ifndef PENICILINA
#define PENICILINA

#include <string>
#include "../tiposDeMedicamento-hpp/antibiotico.hpp"

using std::string;

class Penicilina : public Antibiotico{

    public:
        Penicilina(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);

};

#endif