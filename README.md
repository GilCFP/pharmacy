# Sistema de Farmácia em C++

## Descrição do Projeto

Este projeto é um sistema de farmácia desenvolvido em C++ como parte do curso de Programação e Desenvolvimento de Software. O objetivo do projeto é aplicar conceitos de Programação Orientada a Objetos (POO), tais como abstração, modularização, herança, polimorfismo e o uso de classes.

## Estrutura do Projeto

A estrutura do projeto é organizada da seguinte forma:

### Produto: Classe base que representa qualquer produto vendido na farmácia.
  - **Remédio (Subclasse):** Representa os medicamentos vendidos na farmácia.
    - **Analgesico (Subclasse de Remédio):** Medicamentos usados para aliviar a dor.
    - **Antibiotico (Subclasse de Remédio):** Medicamentos usados para tratar infecções.
    - **Remedio_Controlado (Subclasse de Remédio):** Medicamentos que necessitam de receita médica.
  - **Alimentos (Subclasse):** Representa os alimentos vnedidos na farmácia.
  - **Cosmetico (Subclasse):** Representa os produtos de beleza vendidos na farmácia.
### Funcionario: Classe de base que representa todos os funcionários do estabelecimento.
  - **Vendedor (Subclasse):** Funcionário responsável pelas vendas.
  - **Farmaceutico (Subclasse):** Funcionário responsável por prescrever remédios e verificar receitas.

Cada classe terá suas próprias propriedades e métodos específicos, que são herdados e/ou sobrescritos conforme necessário.

## Funcionalidades

- **Cadastro de Produtos:** Permite adicionar novos produtos à farmácia.
- **Consulta de Produtos:** Permite visualizar informações sobre os produtos cadastrados.
- **Compra de Produtos:** Simula a compra de produtos.
- **Receita Médica:** Gestão de receitas médicas para compra de remédios controlados.

## Tecnologias Utilizadas

- **Linguagem de Programação:** C++
- **Paradigma:** Programação Orientada a Objetos
