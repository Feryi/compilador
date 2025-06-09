#include <stdio.h>

extern int yyparse();

int main() {
    printf("Bienvenido a la app de Finanzas 💰\n");
    printf("Escribe tus tarjetas en formato: NOMBRE: MONTO\n");
    printf("Ejemplo: HSBC: 12000\n");
    printf("Para ver el total, escribe: total\n");
    printf("Para calcular cuánto ahorrar diario, escribe: ahorrar: 12\n\n");
    yyparse();
    return 0;
}
 
