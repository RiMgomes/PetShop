#include <stdio.h>

// Definição das estruturas de dados
struct Cliente {
    char nome[50];
    char endereco[100];
    char contato[20];
    char animalEstimacao[50];
};

struct Servico {
    char tipo[50];
    // Outros atributos do serviço
};

struct Estoque {
    char produto[50];
    int quantidade;
    // Outros atributos do estoque
};

struct Funcionario {
    char nome[50];
    char cargo[50];
    // Outros atributos do funcionário
};

// Função para agendar serviço
void agendarServico(struct Cliente cliente, struct Servico servico) {
    printf("Serviço agendado para o cliente %s.\n", cliente.nome);
    printf("Tipo de serviço: %s\n", servico.tipo);
    // Implementação do agendamento de serviço
}

// Função para controlar o estoque
void controlarEstoque(struct Estoque estoque) {
    printf("Produto: %s\n", estoque.produto);
    printf("Quantidade KG: %d\n", estoque.quantidade);
    // Implementação do controle de estoque
}

// Função principal
int main() {
    struct Cliente cliente1 = {"RICARDO MATOS", "Rua DEZ , 41", "(11) 99999-9999", "Cachorro"};
    struct Servico servico1 = {"Banho E Tosa"};
    struct Estoque estoque1 = {"Ração para Cachorro", 1000};
    
    agendarServico(cliente1, servico1);
    controlarEstoque(estoque1);
    
    return 0;
}
