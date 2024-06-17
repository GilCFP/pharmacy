# Versão mínima do CMake necessária
cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(pharmacy)

#C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Adiciona o executável
# add_executable(pharmacy 
#     main.cpp
#     Sistema.cpp
#     Cliente.cpp
#     Vendedor.cpp
#     Produto.cpp
#     Item.cpp
#     Alimento.cpp
#     Cosmetico.cpp
#     Analgesico.cpp
#     Antibiotico.cpp
#     Controlado.cpp
#     Agulha.cpp
#     Anabolizante.cpp
# )

file(GLOB GENERIC_FOUR "*/*/*/*.cpp")
file(GLOB GENERIC_THREE "*/*/*.cpp")
file(GLOB GENERIC_TWO "*/*.cpp")
file(GLOB GENERIC_ONE "*.cpp")

file(GLOB ONE "*.cpp")

file(GLOB SISTEMA_ONE "Sistema/*.cpp")

file(GLOB RECEITA_ONE "Receita_classe/*.cpp")

file(GLOB PRODUTO_ONE "Produto_classe_pai/*.cpp")
file(GLOB PRODUTO_TWO "Produto_classe_pai/*/*.cpp")

file(GLOB PESSOA_ONE "Pessoa_classe/*.cpp")
file(GLOB PESSOA_TWO "Pessoa_classe/*/*.cpp")
file(GLOB PESSOA_THREE "Pessoa_classe/*/*/*.cpp")

set(SOURCES
    ${SISTEMA_ONE}
    ${RECEITA_ONE}
    ${PRODUTO_ONE}
    ${PRODUTO_TWO}
    ${PESSOA_ONE}
    ${PESSOA_TWO}
    ${PESSOA_THREE}
    main.cpp
)

# set(SOURCES
#     ${GENERIC_FOUR}
#     ${GENERIC_THREE}
#     ${GENERIC_TWO}
#     ${GENERIC_ONE}
#     main.cpp
# )

# Include header files
include_directories(*/.hpp Sistema/*.hpp Receita/*.hpp Produto_classe_pai/*.hpp Produto_classe_pai/*/*.hpp Pessoa_classe/*.hpp Pessoa_classe/*/*.hpp Pessoa_classe/*/*/*.hpp)

# Create an executable
add_executable(pharmacy ${SOURCES})