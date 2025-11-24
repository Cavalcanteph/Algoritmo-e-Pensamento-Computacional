#include <stdio.h>

float calcularMedia(float notas[], int n) {

  float soma = 0;

  for (int i = 0; i < n; i++) {

    soma += notas[i];

  }

  return soma / n;

}

float maiorNota(float notas[], int n) {

  float maior = notas[0];

  for (int i = 1; i < n; i++) {

    if (notas[i] > maior) {

      maior = notas[i];

    }

  }

  return maior;

}

float menorNota(float notas[], int n) {

  float menor = notas[0];

  for (int i = 1; i < n; i++) {

    if (notas[i] < menor) {

      menor = notas[i];

    }

  }

  return menor;

}

int main() {

  int qtdNotas = 4;

  float notas[4];

  int opcao;

  printf("Digite %d notas:\n", qtdNotas);

  for (int i = 0; i < qtdNotas; i++) {

    printf("Nota %d: ", i + 1);

    scanf("%f", &notas[i]);

  }

  do {

    printf("\nMenu de Opções:\n");

    printf("1 - Calcular média\n");

    printf("2 - Mostrar maior nota\n");

    printf("3 - Mostrar menor nota\n");

    printf("0 - Sair\n");

    printf("Escolha uma opção: ");

    scanf("%d", &opcao);

    switch (opcao) {

      case 1:

        printf("Média das notas: %.2f\n", calcularMedia(notas, qtdNotas));

        break;

      case 2:

        printf("Maior nota: %.2f\n", maiorNota(notas, qtdNotas));

        break;

      case 3:

        printf("Menor nota: %.2f\n", menorNota(notas, qtdNotas));

        break;

      case 0:

        return 0;

        break;

      default:

        printf("Opção inválida!\n");

    }

  } while (opcao != 0);

  return 0;

}

