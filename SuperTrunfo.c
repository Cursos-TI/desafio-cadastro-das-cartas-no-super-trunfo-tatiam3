#include <stdio.h>

typedef struct {
    char nome[30];
    int velocidade;
    int potencia;
    int ano;
} Carta;

int main() {
    Carta c1 = {"Fusca 1969", 120, 54, 1969};
    Carta c2 = {"Mustang 1967", 210, 200, 1967};

    int escolha;
    printf("=== Super Trunfo Básico ===\n");
    printf("Carta 1: %s\n", c1.nome);
    printf("  Velocidade: %d\n  Potencia: %d\n  Ano: %d\n\n", 
           c1.velocidade, c1.potencia, c1.ano);

    printf("Carta 2: %s\n", c2.nome);
    printf("  Velocidade: %d\n  Potencia: %d\n  Ano: %d\n\n", 
           c2.velocidade, c2.potencia, c2.ano);

    printf("Escolha o atributo para comparar:\n");
    printf("1 - Velocidade\n2 - Potencia\n3 - Ano\n");
    printf("Digite: ");
    scanf("%d", &escolha);

    int v1, v2;
    if (escolha == 1) { v1 = c1.velocidade; v2 = c2.velocidade; }
    else if (escolha == 2) { v1 = c1.potencia; v2 = c2.potencia; }
    else { v1 = c1.ano; v2 = c2.ano; }

    printf("\nResultado:\n");
    if (v1 > v2) printf("Carta 1 (%s) venceu!\n", c1.nome);
    else if (v2 > v1) printf("Carta 2 (%s) venceu!\n", c2.nome);
    else printf("Empate!\n");

    return 0;
}
