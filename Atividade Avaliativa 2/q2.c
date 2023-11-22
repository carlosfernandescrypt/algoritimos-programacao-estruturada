/* 
2.	Com a proposta para ampliação da terceirização da mão de obra, o Ministério da Fazenda está empenhado em elaborar uma análise sobre o recebimento de salário regular através do registro em carteira profissional dos funcionários no país. Assim, elabore um algoritmo que obtenha, para cada assalariado, com carteira profissional assinada, o seu sexo M(masculino) e F(feminino) e o valor de seu salário, devendo este salário ser maior que um real (R$1,00). Seu algoritmo deverá analisar e classificar este assalariado em Acima, Igual ou Abaixo do salário mínimo. Sabe-se que o salário mínimo nacional é de R$ 1400,00. Após a leitura dos dados de cada assalariado cadastrado pelo ministério deverá ser apresentado o seu salário em reais, a classificação por extenso em relação ao salário mínimo e o sexo por extenso (Masculino ou Feminino).
A classificação em relação ao salário mínimo nacional deverá ser feita pelo sub-algoritmo classificaSalario e os resultados solicitados para cada assalariado deverão ser apresentados pelo sub-algoritmo denominado mostraClassifica. 
Você deverá fazer a entrada de dados para todos os assalariados que foram pesquisados pelo ministério, lembrando de fazer sempre a validação de todos os dados informados em sub-algoritmos específicos.   
Na solução deste problema os resultados finais de cada assalariado que participou desta pesquisa deverão ser apresentados.
Após a leitura dos dados de todos os assalariados pesquisados o seu algoritmo deverá apresentar a quantidade de assalariados com salário abaixo do salário mínimo e a quantidade assalariados com salário acima do salário mínimo


*/
#include <stdio.h>

float obterSalario(){
    float salario;
    do{
        printf("Digite o valor do salario: ");
        scanf("%f", &salario);
        if (salario <= 1){
            printf("Salario invalido\n");
        }
    } while (salario <= 1);
    return salario;
}

char obterSexo(){
    char sexo;
    do{
        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo);
        if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f'){
            printf("Sexo invalido\n");
        }
    } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');
    return sexo;
}

void classificaSalario(float salario, int* abaixo, int* acima){
    if (salario < 1400.00){
        *abaixo += 1;
        printf("Salario: %.2f - Abaixo do salario minimo\n", salario);
    } else if (salario > 1400.00){
        *acima += 1;
        printf("Salario: %.2f - Acima do salario minimo\n", salario);
    } else {
        printf("Salario: %.2f - Igual ao salario minimo\n", salario);
    }
}

void mostraClassificacao(char sexo){
    if (sexo == 'M' || sexo == 'm'){
        printf("Sexo: Masculino\n" );
    } else {
        printf("Sexo: Feminino\n");
    }
}

int main(){
    int abaixo = 0;
    int acima = 0;
    int numAssalariados;
    printf("Digite o numero de assalariados: ");
    scanf("%d", &numAssalariados);
    for (int i = 0; i < numAssalariados; i++){
        printf("Assalariado %d\n", i+1);
        float salario = obterSalario();
        char sexo = obterSexo();
        classificaSalario(salario, &abaixo, &acima);
        mostraClassificacao(sexo);
    }
    printf("Quantidade de assalariados abaixo do salario minimo: %d\n", abaixo);
    printf("Quantidade de assalariados acima do salario minimo: %d\n", acima);
    return 0;
}