#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
} Produto;

typedef struct Node {
    Produto produto;
    struct Node* proximo;
} Node;

Node* inicializarLista() {
    return NULL;
}

Node* adicionarProduto(Node* lista, Produto novoProduto) {
    Node* novoNo = (Node*)malloc(sizeof(Node));
    if (novoNo == NULL) {
        printf("Erro ao alocar memória para o novo produto.\n");
        exit(EXIT_FAILURE);
    }

    novoNo->produto = novoProduto;
    novoNo->proximo = lista;

    return novoNo;
}

void imprimirRelatorio(Node* lista) {
    printf("\nRelatorio de Produtos:\n");
    printf("Codigo | Descricao               | Quantidade | Valor\n");
    printf("--------------------------------------------------\n");

    Node* atual = lista;
    while (atual != NULL) {
        printf("%-6d | %-23s | %-10d | %.2f\n", atual->produto.codigo, atual->produto.descricao, atual->produto.quantidade, atual->produto.valor);
        atual = atual->proximo;
    }
}

Node* pesquisarProduto(Node* lista, int codigo) {
    Node* atual = lista;
    while (atual != NULL) {
        if (atual->produto.codigo == codigo) {
            return atual;
        }
        atual = atual->proximo;
    }
    return NULL;
}

Node* removerProduto(Node* lista, int codigo) {
    Node *anterior = NULL, *atual = lista;

    while (atual != NULL && atual->produto.codigo != codigo) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual != NULL) {
        if (anterior != NULL) {
            anterior->proximo = atual->proximo;
        } else {
            lista = atual->proximo;
        }
        free(atual);
        printf("Produto removido com sucesso.\n");
    } else {
        printf("Produto nao encontrado.\n");
    }

    return lista;
}

void liberarLista(Node* lista) {
    Node* atual = lista;
    while (atual != NULL) {
        Node* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}

int main() {
    Node* estoque = inicializarLista();

    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Adicionar Produto\n");
        printf("2. Imprimir Relatorio\n");
        printf("3. Pesquisar Produto\n");
        printf("4. Remover Produto\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                Produto novoProduto;
                printf("\nDigite as informacoes do novo produto:\n");
                printf("Codigo: ");
                scanf("%d", &novoProduto.codigo);
                printf("Descricao: ");
                scanf("%s", novoProduto.descricao);
                printf("Quantidade: ");
                scanf("%d", &novoProduto.quantidade);
                printf("Valor: ");
                scanf("%f", &novoProduto.valor);

                estoque = adicionarProduto(estoque, novoProduto);
                printf("Produto adicionado com sucesso.\n");
                break;
            }
            case 2: {
                imprimirRelatorio(estoque);
                break;
            }
            case 3: {
                int codigoPesquisa;
                printf("\nDigite o codigo do produto a ser pesquisado: ");
                scanf("%d", &codigoPesquisa);

                Node* encontrado = pesquisarProduto(estoque, codigoPesquisa);
                if (encontrado != NULL) {
                    printf("\nProduto encontrado:\n");
                    printf("Codigo: %d\nDescricao: %s\nQuantidade: %d\nValor: %.2f\n", encontrado->produto.codigo, encontrado->produto.descricao, encontrado->produto.quantidade, encontrado->produto.valor);
                } else {
                    printf("\nProduto nao encontrado.\n");
                }
                break;
            }
            case 4: {
                int codigoRemocao;
                printf("\nDigite o codigo do produto a ser removido: ");
                scanf("%d", &codigoRemocao);

                estoque = removerProduto(estoque, codigoRemocao);
                break;
            }
            case 0: {
                break;
            }
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 0);

    liberarLista(estoque);

    return 0;
}
