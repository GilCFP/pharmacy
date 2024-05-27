# Sistema de Farmácia em C++

## Descrição do Projeto

Este projeto é um sistema de farmácia desenvolvido em C++ como parte do curso de Programação e Desenvolvimento de Software. O objetivo do projeto é aplicar conceitos de Programação Orientada a Objetos (POO), tais como abstração, modularização, herança, polimorfismo e o uso de classes.

## Estrutura do Projeto

A estrutura do projeto é organizada da seguinte forma:

- **Produto (Superclasse):** Classe base que representa qualquer produto vendido na farmácia.
  - **Remédio (Subclasse):** Representa os medicamentos vendidos na farmácia.
    - **Analgésico (Subclasse de Remédio):** Medicamentos usados para aliviar a dor.
    - **Antibiótico (Subclasse de Remédio):** Medicamentos usados para tratar infecções.
    - **Remédio Controlado (Subclasse de Remédio):** Medicamentos que necessitam de receita médica.
  - **Bala (Subclasse):** Representa as balas vendidas na farmácia.
  - **Cosmético (Subclasse):** Representa os produtos de beleza vendidos na farmácia.

Cada classe terá suas próprias propriedades e métodos específicos, que são herdados e/ou sobrescritos conforme necessário.

## Funcionalidades

- **Cadastro de Produtos:** Permite adicionar novos produtos à farmácia.
- **Consulta de Produtos:** Permite visualizar informações sobre os produtos cadastrados.
- **Compra de Produtos:** Simula a compra de produtos, diminuindo o estoque.
- **Receita Médica:** Gestão de receitas médicas para compra de remédios controlados.

## Tecnologias Utilizadas

- **Linguagem de Programação:** C++
- **Paradigma:** Programação Orientada a Objetos

## Estrutura de Arquivos

