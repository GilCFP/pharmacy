#ifndef ALIMENTO
#define ALIMENTO

#include "..\projeto_farmacia\Produto_classe\pharmacy\produto\produto.hpp"

#include <string>
using std::string;

class Alimento : public Produto
{
    public:
        int calorias;
        Alimento(int calorias, string descricaoprod, int quantidadeprod, float preco);
        virtual string InformacoesProduto()=0;    
};

#endif