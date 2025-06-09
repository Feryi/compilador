%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int yylex(void);
int yyerror(const char *s);
%}

%union {
    int num;
    char* str;
}

%token <num> NUM
%token <str> ID
%token TOTAL AHORRAR
%start entrada

%%

entrada:
    /* vacío */
    | entrada linea
    ;

linea:
    ID ':' NUM '\n' {
        agregar_pago($1, $3);
        free($1);
    }
  | TOTAL '\n' {
        mostrar_total();
    }
  | AHORRAR ':' NUM '\n' {
        calcular_ahorro_diario($3);
    }
    ;

%%

int yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
    return 0;
}

