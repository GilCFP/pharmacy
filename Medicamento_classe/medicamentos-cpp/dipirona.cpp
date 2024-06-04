#include "../medicamentos-hpp/dipirona.hpp"
#include <string>

using std::string;

Dipirona::Dipirona(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Analgesico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}
