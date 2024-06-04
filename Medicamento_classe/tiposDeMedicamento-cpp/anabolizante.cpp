#include "../tiposDeMedicamento-hpp/anabolizante.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Anabolizante::Anabolizante(string prescricao, bool precisaDeReceita = true, string descricaoprod, int quantidadeprod, float preco):
Medicamento(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{

}
