#include "../medicamentos-hpp/amicacina.hpp"
#include <string>

using std::string;

Amicacina::Amicacina(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Antibiotico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}
