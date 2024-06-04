#ifndef PARACETAMOL
#define PARACETAMOL

#include <string>
#include "../tiposDeMedicamento-hpp/analgesico.hpp"

using std::string;

class Paracetamol : public Analgesico{

    public:
        Paracetamol(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);

};

#endif