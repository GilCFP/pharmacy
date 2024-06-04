#include "../tiposDeMedicamento-hpp/antibiotico.hpp"
#include <string>

using std::string;

Antibiotico::Antibiotico(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Medicamento(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{

}

