#include "../medicamentos-hpp/androxon.hpp"
#include <string>

using std::string;

Androxon::Androxon(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Anabolizante(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{
    
}
