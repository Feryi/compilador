#include <stdio.h>
#include <string.h>

#define MAX_TARJETAS 10

typedef struct {
    char nombre[50];
    int monto;
} Tarjeta;

Tarjeta tarjetas[MAX_TARJETAS];
int total = 0;
int contador = 0;

void agregar_pago(const char* tarjeta, int monto) {
    if (contador < MAX_TARJETAS) {
        strcpy(tarjetas[contador].nombre, tarjeta);
        tarjetas[contador].monto = monto;
        total += monto;
        printf("Registrado: %s debe pagar $%d\n", tarjeta, monto);
        contador++;
    } else {
        printf("⚠️  No puedes registrar más tarjetas.\n");
    }
}

void mostrar_total() {
    printf("💳 Total a pagar: $%d\n", total);
}

void calcular_ahorro_diario(int dias) {
    if (dias <= 0) {
        printf("⚠️  Número de días no válido.\n");
        return;
    }
    float por_dia = (float) total / dias;
    printf("📅 Necesitas ahorrar $%.2f por día para pagar en %d días.\n", por_dia, dias);
}

