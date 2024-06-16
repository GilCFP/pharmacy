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

set(SOURCES
    ${GENERIC_FOUR}
    ${GENERIC_THREE}
    ${GENERIC_TWO}
    ${GENERIC_ONE}
    main.cpp
)

# Include header files
include_directories(*/ */*/ */*/*/ */*/*/*/)

# Create an executable
add_executable(pharmacy ${SOURCES})