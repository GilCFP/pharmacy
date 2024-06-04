#include "../tiposDeMedicamento-hpp/analgesico.hpp"
#include <string>

using std::string;

Analgesico::Analgesico(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Medicamento(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{

}

