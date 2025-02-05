#include <stdio.h>
#include <stdlib.h>

void main() {
    int x = 0; //criando uma variável inteira
    printf("Valor de x: %d\n",x);
    x++; //incrementando x em 1 unidade
    printf("Valor de x: %d\n",x);
    float y = 12.345678; //criando uma variárel Real
    printf("Valor de y: %f\n",y);
    //Imprimindo o valor de y com apenas 2 casas
    printf("Valor de y: %.2f\n",y);
    //1 Caractere deve estar entre apóstrofo
    char sexo = 'M'; //variável que aceita 1 caractere
    printf("Sexo: %c\n", sexo);
    //Criando uma variável String (Texto)
    char nome[30] = "Joao";
    printf("Nome: %s\n", nome);
    //Imprimindo a primeira letra do nome
    printf("Primeira Letra: %c\n", nome[0]);
    printf("\nDigite o valor de x: ");
    scanf("%d", &x);
    printf("O valor digitado foi %d\n", x);
}
/*
Exercícios sobre os comandos básicos em C
*/

//1. Faça um programa que imprima o seu nome.
void q1() {
    printf("Otávio Dias!");
}

//2. Faça um programa que imprima o produto dos valores 30 e 27.
void q2(){
printf("30*27 = %d, 30*27");
}
//3. Faça um programa que imprima a média aritmética entre os números 5, 8, 12.

//4. Faça um programa que leia e imprima um número inteiro.

//5. Faça um programa que leia dois números reais e os imprima.

//6. Faça um programa que leia um número inteiro e imprima o seu
//   antecessor e o seu sucessor.

//7. Faça um programa que leia o nome o endereço e o telefone de
//   um cliente e ao final, imprima esses dados.

//8. Faça um programa que leia dois números inteiros e imprima a
//   subtração deles.

//9. Faça um programa que leia umnúmero real e imprima ¼ deste número.

//10. Faça um programa que leia três números reais e calcule a
//    média aritmética destes números. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//11. Faça um programa que leia dois números reais e calcule as
//    quatro operações básicas entre estes dois números, adição,
//    subtração,multiplicação e divisão. Ao final, o programa
//    deve imprimir os resultados dos cálculos.

//12. Faça um programa que leia um número real e calcule o
//    quadrado deste número. Ao final, o programa deve
//    imprimir o resultado do cálculo.

//13. Faça um programa que leia o saldo de uma conta poupança e
//    imprima o novo saldo, considerando um reajuste de 2%.

//14. Faça um programa que leia a base e a altura de um retângulo
//    e imprima o perímetro (base*2 + altura*2) e a área (base * altura).

//15. Faça um programa que leia o valor de um produto, o percentual
//    do desconto desejado e imprima o valor do desconto e o valor
//    do produto subtraindo o desconto.

//16. Faça um programa que calcule o reajuste do salário de um
//    funcionário. Para isso, o programa deverá ler o salário atual
//    do funcionário e ler o percentual de reajuste. Ao final imprimir
//    o valor do novo salário.

//17. Faça um programa que calcule a conversão entre graus centígrados
//    e Fahrenheit. Para isso, leia o valor em centígrados e calcule
//    com base na fórmula a seguir. Após calcular o programa deve
//    imprimir o resultado da conversão.
//    F = (9 x C +160) / 5

//18. Faça um programa que calcule a quantidade de litros de combustível
//    consumidos em uma viagem, sabendo-se que o carro tem autonomia de
//    12 km por litro de combustível. O programa deverá ler o tempo
//    decorrido na viagem e a velocidade média e aplicar as fórmulas:
//    D = T x V       L = D / 12
//    Em que:
//    • D = Distância percorrida em horas
//    • T = Tempo
//    • V = Velocidade média
//    • L = Litros de combustível consumidos
//    Ao final, o programa deverá imprimir a distância percorrida e a
//    quantidade de litros consumidos na viagem.

//19. Faça um programa que calcule o valor de uma prestação em atraso.
//    Para isso, o programa deve ler o valor da prestação vencida, a
//    taxa periódica de juros e o período de atraso. Ao final, o
//    programa deve imprimir o valor da prestação atrasada, o período
//    de atraso, os juros que serão cobrados pelo período de atraso, o
//    valor da prestação acrescido dos juros. Considere juros simples.

//20. Faça um programa que efetue a apresentação do valor da conversão
//    em real (R$) de um valor lido em dólar (US$). Para isso, será
//    necessário também ler o valor da cotação do dólar.

int main() {
    q2();
    return EXIT_SUCCESS;
}