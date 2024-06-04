#include "../medicamentos-hpp/penicilina.hpp"
#include <string>

using std::string;

Penicilina::Penicilina(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Antibiotico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}

