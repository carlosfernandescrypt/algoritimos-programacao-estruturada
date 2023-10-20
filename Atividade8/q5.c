#include <stdio.h>

int main() {
    int votos[5] = {0}, idade, sexo, voto;
    int mulheresParticipantes = 0, pessoasMaiorIdade = 0;

    while (1) {
        char nome[100];
        printf("Nome: ");
        scanf("%s", nome);
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Sexo (0 para masculino, 1 para feminino): ");
        scanf("%d", &sexo);
        if (idade > 12 && sexo) {
            printf("Voto (1 a 5 para as jogadoras, 0 para encerrar): ");
            scanf("%d", &voto);
            if (voto == 0) break;
            if (voto >= 1 && voto <= 5) {
                votos[voto - 1]++;
                if (voto == 5 && idade >= 18) printf("%s votou na Marta Vieira.\n", nome);
                if (idade >= 18) pessoasMaiorIdade++;
                if (sexo) mulheresParticipantes++;
            }
        }
    }

    printf("Quantidade de votos por jogadora:\n");
    for (int i = 0; i < 5; i++) printf("%d votos para a jogadora %d\n", votos[i], i + 1);

    int maiorVotos = 0;
    printf("Jogadoras mais votadas:\n");
    for (int i = 0; i < 5; i++)
        if (votos[i] == maiorVotos || votos[i] > maiorVotos)
            printf("Jogadora %d\n", i + 1), maiorVotos = votos[i];

    printf("Participantes da pesquisa:\n");
    printf("Homens: %d\nMulheres: %d\n", mulheresParticipantes, mulheresParticipantes);

    printf("Pessoas maior de idade que votaram na Marta Vieira:\n");
    return 0;
}
