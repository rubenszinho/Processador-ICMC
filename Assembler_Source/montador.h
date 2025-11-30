#ifndef _MONTADOR_
#define _MONTADOR_

#define LABEL_CODE 	107
#define EQU_CODE 	108

/* Pseudo-instrucoes (op code 'interno') */
#define VAR_CODE	109
#define STATIC_CODE 	110
#define STRING_CODE 	111
#define ALLOC_CODE	112

/* Pseudo-instrucoes (strings) */
#define EQU_STR		"EQU"
#define VAR_STR 	"VAR"
#define STATIC_STR 	"STATIC"
#define STRING_STR 	"STRING"
#define ALLOC_STR	"ALLOC"

void Montar(void);

#endif