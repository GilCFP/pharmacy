#include "../tiposDeMedicamento-hpp/controlado.hpp"
#include <string>

using std::string;

Controlado::Controlado(string prescricao, bool precisaDeReceita, string descricaoprod, int quantidadeprod, float preco):
Medicamento(prescricao, precisaDeReceita, descricaoprod, quantidadeprod, preco)
{

}
