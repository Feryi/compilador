%{
#include "parser.tab.h"
#include <string.h>
#include <stdlib.h>
%}

%%

[0-9]+              { yylval.num = atoi(yytext); return NUM; }
[a-zA-Z_][a-zA-Z0-9_]* {
                        if (strcmp(yytext, "total") == 0) return TOTAL;
                        if (strcmp(yytext, "ahorrar") == 0) return AHORRAR;
                        yylval.str = strdup(yytext);
                        return ID;
                     }
":"                 { return ':'; }
[\n]                { return '\n'; }
[\t ]+              ; // ignorar espacios y tabulaciones
.                   { return yytext[0]; }

%%

int yywrap() {
    return 1;
}

