#ifndef ALIMENTO
#define ALIMENTO

#include "..\Produto\produto.hpp"

#include <string>
using std::string;

class Alimento : public Produto
{
    public:
        int calorias;
        Alimento(int calorias, string descricaoprod, int quantidadeprod, float preco);
        virtual string InformacoesProduto()=0; 
        virtual ~Alimento();  
};

#endif