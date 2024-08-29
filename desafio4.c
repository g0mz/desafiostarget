#include <stdio.h>

int main() {

    double sp = 67836.43, rj = 36678.66, mg = 29229.88, es = 27165.48, outros = 19849.53;
    double faturamento_total = sp + rj + mg + es + outros;

        printf("SP: %.2f%%\n", (sp / faturamento_total) * 100);
        printf("RJ: %.2f%%\n", (rj / faturamento_total) * 100);
        printf("MG: %.2f%%\n", (mg / faturamento_total) * 100);
        printf("ES: %.2f%%\n", (es / faturamento_total) * 100);
        printf("Outros: %.2f%%\n", (outros / faturamento_total) * 100);

    return 0;
}
