#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pregunta.h"


void escribirCSV (int id, char pregunta[50], char respuestas[300],
    		char respuestaVerdadera[30], char dificultad[10], char tipo[10]) {
	//Creacion o edicion de fichero .csv con una pregunta y sus respuestas
	FILE *fPPreguntasYRespuestas;
	fPPreguntasYRespuestas = fopen("PreguntasYRespuestas.csv", "a");
	fprintf(fPPreguntasYRespuestas, "%d, %s, %s, %s, %d, %d, %s\n", id, pregunta, dificultad, tipo, id, 1, respuestaVerdadera);
	fprintf(fPPreguntasYRespuestas, "%d, %s, %s, %s, %d, %d, %s\n", id, pregunta, dificultad, tipo, id, 0, respuestas);
	fclose(fPPreguntasYRespuestas);
}

Pregunta cargarCSV (int id) {
	Pregunta p;



	return p;
}

Pregunta imprimirPregunta(Pregunta p) {
	printf("P: %s \n", p.pregunta);

	char *pR;
	pR = strtok(p.respuestas, ",");

	for (int i = 1; i < 4; i++) {
		printf("%s\n", pR);
		pR = strtok(NULL, ",");
	}

	return p;
}
