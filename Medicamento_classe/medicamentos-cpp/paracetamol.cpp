#include "../medicamentos-hpp/paracetamol.hpp"
#include <string>

using std::string;

Paracetamol::Paracetamol(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Analgesico(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}