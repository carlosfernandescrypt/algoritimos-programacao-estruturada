#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    int id;
    char nome[50];
    char email[50];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
} Usuario;

int gerarId() {
    return rand() % 10000 + 1;
}

void incluirUsuario(Usuario usuarios[], int* totalUsuarios) {
    if (*totalUsuarios < 1000) {
        Usuario novoUsuario;

        novoUsuario.id = gerarId();

        printf("\nDigite o nome completo: ");
        scanf(" %[^\n]s", novoUsuario.nome);

        do {
            printf("Digite o email: ");
            scanf("%s", novoUsuario.email);
        } while (strstr(novoUsuario.email, "@") == NULL);

        do {
            printf("Digite o sexo (Feminino, Masculino ou Indiferente): ");
            scanf("%s", novoUsuario.sexo);
        } while (strcmp(novoUsuario.sexo, "Feminino") != 0 && strcmp(novoUsuario.sexo, "Masculino") != 0 && strcmp(novoUsuario.sexo, "Indiferente") != 0);

        printf("Digite o endereco: ");
        scanf(" %[^\n]s", novoUsuario.endereco);

        do {
            printf("Digite a altura (entre 1 e 2 metros): ");
            scanf("%lf", &novoUsuario.altura);
        } while (novoUsuario.altura < 1 || novoUsuario.altura > 2);

        do {
            printf("A pessoa foi vacinada? (1 para sim, 0 para nao): ");
            scanf("%d", &novoUsuario.vacina);
        } while (novoUsuario.vacina != 0 && novoUsuario.vacina != 1);

        usuarios[*totalUsuarios] = novoUsuario;
        (*totalUsuarios)++;

        printf("Usuario cadastrado com sucesso.\n");
    } else {
        printf("Limite de usuarios atingido.\n");
    }
}

void editarUsuario(Usuario usuarios[], int totalUsuarios) {
    int idEditar;
    printf("\nDigite o ID do usuario que deseja editar: ");
    scanf("%d", &idEditar);

    for (int i = 0; i < totalUsuarios; i++) {
        if (usuarios[i].id == idEditar) {
            printf("Digite o novo nome completo: ");
            scanf(" %[^\n]s", usuarios[i].nome);

            do {
                printf("Digite o novo email: ");
                scanf("%s", usuarios[i].email);
            } while (strstr(usuarios[i].email, "@") == NULL);

            do {
                printf("Digite o novo sexo (Feminino, Masculino ou Indiferente): ");
                scanf("%s", usuarios[i].sexo);
            } while (strcmp(usuarios[i].sexo, "Feminino") != 0 && strcmp(usuarios[i].sexo, "Masculino") != 0 && strcmp(usuarios[i].sexo, "Indiferente") != 0);

            printf("Digite o novo endereco: ");
            scanf(" %[^\n]s", usuarios[i].endereco);
          
            do {
                printf("Digite a nova altura (entre 1 e 2 metros): ");
                scanf("%lf", &usuarios[i].altura);
            } while (usuarios[i].altura < 1 || usuarios[i].altura > 2);
          
            do {
                printf("A pessoa foi vacinada? (1 para sim, 0 para nao): ");
                scanf("%d", &usuarios[i].vacina);
            } while (usuarios[i].vacina != 0 && usuarios[i].vacina != 1);

            printf("Usuario editado com sucesso.\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void excluirUsuario(Usuario usuarios[], int* totalUsuarios) {
    int idExcluir;
    printf("\nDigite o ID do usuario que deseja excluir: ");
    scanf("%d", &idExcluir);

    for (int i = 0; i < *totalUsuarios; i++) {
        if (usuarios[i].id == idExcluir) {
            usuarios[i] = usuarios[*totalUsuarios - 1];
            (*totalUsuarios)--;
            printf("Usuario excluido com sucesso.\n");
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void buscarPorEmail(Usuario usuarios[], int totalUsuarios) {
    char emailBusca[50];
    printf("\nDigite o email do usuario que deseja buscar: ");
    scanf("%s", emailBusca);

    for (int i = 0; i < totalUsuarios; i++) {
        if (strcmp(usuarios[i].email, emailBusca) == 0) {
            printf("\nUsuario encontrado:\n");
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereco: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf\n", usuarios[i].altura);
            printf("Vacina: %d\n", usuarios[i].vacina);
            return;
        }
    }

    printf("Usuario nao encontrado.\n");
}

void imprimirUsuarios(Usuario usuarios[], int totalUsuarios) {
    printf("\nLista de todos os usuarios cadastrados:\n");
    for (int i = 0; i < totalUsuarios; i++) {
        printf("ID: %d\n", usuarios[i].id);
        printf("Nome: %s\n", usuarios[i].nome);
        printf("Email: %s\n", usuarios[i].email);
        printf("Sexo: %s\n", usuarios[i].sexo);
        printf("Endereco: %s\n", usuarios[i].endereco);
        printf("Altura: %.2lf\n", usuarios[i].altura);
        printf("Vacina: %d\n", usuarios[i].vacina);
        printf("--------------------\n");
    }
}

int main() {

    srand((unsigned int)time(NULL));

    Usuario usuarios[1000];
    int totalUsuarios = 0;
    char opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Incluir Usuario\n");
        printf("2. Editar Usuario\n");
        printf("3. Excluir Usuario\n");
        printf("4. Buscar por Email\n");
        printf("5. Imprimir Todos os Usuarios\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                incluirUsuario(usuarios, &totalUsuarios);
                break;
            case '2':
                editarUsuario(usuarios, totalUsuarios);
                break;
            case '3':
                excluirUsuario(usuarios, &totalUsuarios);
                break;
            case '4':
                buscarPorEmail(usuarios, totalUsuarios);
                break;
            case '5':
                imprimirUsuarios(usuarios, totalUsuarios);
                break;
            case '0':
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != '0');

    return 0;
}
