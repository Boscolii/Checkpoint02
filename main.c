#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Henrique Nogueira Boscoli RM563651
//Joao Henrique Queiroz Gil RM563578



void verificarPalindromo() {
    char palavra[101];
    int i, tamanho;
    int ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%100s", palavra);

    tamanho = strlen(palavra);
    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo) {
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra nao e um palindromo.\n");
    }
}

void verificarSubstring() {
    char str1[101], str2[101];

    printf("Digite a primeira string: ");
    scanf("%100s", str1);

    printf("Digite a segunda string: ");
    scanf("%100s", str2);

    if (strstr(str1, str2)) {
        printf("A segunda string esta contida na primeira.\n");
    } else {
        printf("A segunda string nao esta contida na primeira.\n");
    }
}
int main(){
int escolha, numfib, numfat;
int fibonacci[50];
int fatorial[20];

setlocale(LC_ALL, "Portuguese");

    printf("===== MENU DE EXERCÍCIOS =====\n");
    printf("1 - Sequência de Fibonacci;\n");
    printf("2 - Fatoriais;\n");
    printf("3 - Verificar Palíndromo;\n");
    printf("4 - Verificar Substring;\n");
    printf("5 - Fechar programa.\n");
    scanf("%d", &escolha);


switch (escolha){
case 1:
        printf("Digite a quantidade de termos da sequência de Fibonacci (1 a 50): ");
        scanf("%d", &numfib);
            while (numfib < 1 || numfib > 50) {
                printf("O valor deve estar entre 1 e 50: ");
                scanf("%d", &numfib);
            }
    for (int i = 0; i < numfib; i++){
        if (i == 0){
            fibonacci[i] = 0;
        }
        else if (i == 1) {
            fibonacci[i] = 1;
        }
        else {
            fibonacci[i] = fibonacci[i - 1] + fibonacci [i - 2];
        }
    }
    printf("Sequência de Fibonacci:\t");
    for (int i = 0; i < numfib; i++){
        printf("%d ", fibonacci[i]);
    }
    break;
case 2:
    printf("Digite um número inteiro (1 a 20): ");
    scanf("%d", &numfat);
    while (numfat < 1 || numfat > 20) {
        printf("O valor deve estar entre 1 e 20: ");
        scanf("%d", &numfat);}


    for (int i = 1; i <= numfat; i++){
        if (i == 1){
            fatorial[i] = 1;
        }
        else {
            fatorial[i] = fatorial[i -1] * i;
        }
    }
    printf("Fatoriais:\n");
    for (int i = 1; i <= numfat; i++){
        printf("%d! = %d\n", i, fatorial[i]);
    }
    break;
case 3:
    verificarPalindromo();
    break;
case 4:
    verificarSubstring();
    break;
case 5:
    printf("Programa encerrado!");
    break;
    }
return 0;
    }





