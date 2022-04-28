#include <stdio.h>
#include <stdlib.h>

int main()
{
    int salario, venda, comissao;
    char nome, setor, cidade, estado;

    printf("---Calculo de comissao para vendas de eletrodomestico--- \n");
    printf("Digite o nome do funcionario: \n");
    scanf("%s", &nome);

    printf("Digite o setor do funcionario:  \n");
    scanf("%s", &setor);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o estado que reside: \n");
    scanf("%s", &estado);

    printf("Digite o salario base: \n");
    scanf("%d", &salario);

    printf("Digite o valor total venda do vendedor no mes: \n");
    scanf("%d", &venda);

            if (venda >= 55000 <= 100000){
        comissao = venda*(2/100);
        printf("Bonus Recebido: %d \n" , comissao);
        salario = salario + comissao;

    }

    if (venda <= 55000){
        comissao = 100;
        printf("Bonus Recebido: %d \n", comissao);
        salario = salario + comissao;
    }

    if (venda >= 10000){
        comissao = 5000;
        printf("Bonus Recebido: %d \n", comissao);
        salario = salario + comissao;
    }

    printf("Salario Final: %d \n", salario);
    return 0;
}
