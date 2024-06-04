#include "../medicamentos-hpp/ofloxacina.hpp"
#include <string>

using std::string;

Ofloxacina::Ofloxacina(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Antibiotico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}
