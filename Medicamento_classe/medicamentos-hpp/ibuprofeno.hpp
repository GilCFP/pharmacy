#ifndef IBUPROFENO
#define IBUPROFENO

#include <string>
#include "../tiposDeMedicamento-hpp/analgesico.hpp"

using std::string;

class Ibuprofeno : public Analgesico{

    public:
        Ibuprofeno(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco);

};

#endif