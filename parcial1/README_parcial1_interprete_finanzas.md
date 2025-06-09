# 🧮 Intérprete de Finanzas (Parcial 1 - Compiladores)

Este proyecto es una aplicación de consola desarrollada con **Lex y Yacc (Flex y Bison)** que permite gestionar deudas de tarjetas bancarias y calcular metas de ahorro diarias.

## 🎯 Objetivo
Crear un intérprete que acepte entradas como:

```
HSBC: 12000
BBVA: 8000
STORI: 6000
total
ahorrar: 12
```

Y produzca salidas como:

```
Registrado: HSBC debe pagar $12000
💳 Total a pagar: $26000
📅 Necesitas ahorrar $2166.67 por día para pagar en 12 días.
```

---

## 🛠️ Tecnologías
- **Lenguaje**: C
- **Herramientas**: Flex, Bison, GCC
- **Entorno**: Linux (WSL)

---

## 📁 Estructura
```
parcial1/interprete_finanzas/
├── main.c              // Punto de entrada
├── lexer.l             // Análisis léxico (tokens: ID, NUM, comandos)
├── parser.y            // Análisis sintáctico y lógica semántica
├── funciones.c         // Funciones de lógica: agregar pagos, calcular total, ahorro
├── funciones.h         // Prototipos
├── parser.tab.[c/h]    // Archivos generados por Bison
├── lex.yy.c            // Archivo generado por Flex
```

---

## 💡 Cómo compilar y correr

```bash
bison -d parser.y
flex lexer.l
gcc -o finanzas main.c funciones.c parser.tab.c lex.yy.c -lfl
./finanzas
```

---

## 📌 Notas
- Acepta nombres con letras y números (como `STORI123: 5000`)
- Los comandos `total` y `ahorrar: n` pueden usarse en cualquier momento
- No distingue mayúsculas/minúsculas (pero se puede adaptar fácilmente)

---

### 👨‍💻 Autor
**Fernando Muñoz Herrada**  
Estudiante de Ingeniería en Tecnologías Computacionales  
*Tecnológico de Monterrey*
