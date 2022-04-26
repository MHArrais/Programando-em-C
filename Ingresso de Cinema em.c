#include <stdio.h>
#include <stdlib.h>

int main()
{
    int filme, quantIngressos;
    double valorIngresso;
    printf("Seja muito bem vindo ao CineCinema, aqui voce compra o seu ingresso com mais agilidade pelo novo sistema de vendas eletronicas \n");
    printf("O valor do Ingresso e apenas 12,50\n");
    printf("Qual filme voce ira assistir hoje? \n");
    printf("----------Digite 1 para assistir: Vingadores 4 da Marvel----------\n");
    printf("----------Digite 2 para assistir: Como Treinar o seu Dragao 3----------\n");
    printf("----------Digite 3 para assistir: Dumbo----------\n");
    printf("----------Digite 4 para assistir: Shazam!----------\n");
    scanf("%d", &filme);
    printf("Informe a quantidade de Ingresso que voce ira comprar: \n");
    scanf("%d", &quantIngressos);
    valorIngresso=quantIngressos*12,50;
    printf("Obrigado! Para comprar o %d ingresso(s) para o filme numero %d voce ira gastar %.2f" , quantIngressos, filme, valorIngresso);

    return 0;
}
