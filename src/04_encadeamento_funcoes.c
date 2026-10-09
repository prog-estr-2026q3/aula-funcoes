#include <stdio.h>

int dobro(int n) {
    int d = n * 2;
    return d;
}

int calcular_bonus(int base, int taxa) {
    int d = dobro(base);
    int bonus = d + taxa;
    return bonus;
}

int processar_salario(int horas, int valor_hora) {
    int bruto = horas * valor_hora;
    int total = bruto + calcular_bonus(bruto, 50);
    return total;
}

int main(void) {
    int liquido = processar_salario(40, 20);
    printf("Total: %d\n", liquido);
    return 0;
}
