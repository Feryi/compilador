# Intérprete de Finanzas 💳 (Parcial 1 - Compiladores)

Este proyecto implementa un intérprete simple de finanzas utilizando **Flex (Lex)** y **Bison (Yacc)**. Permite registrar deudas por tarjeta, calcular el total a pagar y cuánto ahorrar diario.

## 🛠️ Cómo compilar

```bash
bison -d parser.y
flex lexer.l
gcc -o finanzas main.c funciones.c parser.tab.c lex.yy.c -lfl

Ejemplo de uso
***************************************************************
HSBC: 12000
BBVA: 8000
STORI: 6000
total
ahorrar: 12

docker build -t feryi/interprete_finanzas .
***************************************************************

Imagen publicada correctamente en:
📦 https://hub.docker.com/r/feryi/interprete_finanzas
Para ejecutarlo:
docker run -it feryi/interprete_finanzas
