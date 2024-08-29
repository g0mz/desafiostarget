#include <stdio.h>

int main() {
    
    double faturamento[] = {100, 200, 0, 300, 400, 0, 500, 100, 0, 600, 700, 0, 800, 900, 1000};
    int tamanho = sizeof(faturamento) / sizeof(faturamento[0]);
    double menor_faturamento = 1e9, maior_faturamento = -1e9, soma = 0;
    int dias_validos = 0, dias_acima_da_media = 0;

    for (int i = 0; i < tamanho; i++) {
        if (faturamento[i] > 0) {
            if (faturamento[i] < menor_faturamento) menor_faturamento = faturamento[i];
            if (faturamento[i] > maior_faturamento) maior_faturamento = faturamento[i];
            soma += faturamento[i];
            dias_validos++;
        }
    }

        double media_mensal = soma / dias_validos;

    for (int i = 0; i < tamanho; i++) {
    if (faturamento[i] > media_mensal) 
    dias_acima_da_media++;
    }

        printf("Menor faturamento: %.2f\n", menor_faturamento);
        printf("Maior faturamento: %.2f\n", maior_faturamento);
        printf("Dias acima da média: %d\n", dias_acima_da_media);

    return 0;
}
