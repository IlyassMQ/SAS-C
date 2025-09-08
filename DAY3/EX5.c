#include <stdio.h>

#define NUM_RATES ((int)(sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void) {
    int i, low_rate, num_years, year, mois;
    double value[5];     

    printf("Taux d'interet : ");
    scanf("%d", &low_rate);
    printf("Nombre d'annees: ");
    scanf("%d", &num_years);

    printf("\nAnnees");
    for (i = 0; i < NUM_RATES; i++) {
        printf("%8d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }
    printf("\n");

    for (year = 1; year <= num_years; year++) {
        printf("Annees %3d ", year);
        for (i = 0; i < NUM_RATES; i++) {
            float taux_mensuel = (low_rate + i) / 100.0 / 12.0;
            for (mois = 1; mois <= 12; mois++) {
            value[i] = value[i] + value[i] * taux_mensuel;
            }

            printf("%.2f   ", value[i]);
        }
        printf("\n");
    }

    return 0;
}
