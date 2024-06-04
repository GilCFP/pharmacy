#include "../medicamentos-hpp/durateston.hpp"
#include <string>

using std::string;

Durateston::Durateston(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Anabolizante(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}
