#include <stdio.h>
#include <stdlib.h>
#include "Pregunta.h"


void escribirCSV (int id, char pregunta[50], char respuestas[300],
    		char respuestaVerdadera[30], char dificultad[10], char tipo[10]) {
	//Creacion o edicion de fichero .csv con una pregunta
	FILE *fPPreguntas;
	fPPreguntas = fopen("Preguntas.csv", "a");
	fprintf(fPPreguntas, "%d, %s, %s, %s\n", id, pregunta, dificultad, tipo);
	fclose(fPPreguntas);

	//Creacion o edicion de fichero .csv con las respuestas de una pregunta
	FILE *fPRespuestas;
	fPRespuestas = fopen("Respuestas.csv", "a");
	fprintf(fPRespuestas, "%d, %d, %s\n", id, 1, respuestaVerdadera);
	//En la implementacion futura de C++ los metodos tendran que quitar la respuestaVerdadera de respuestas
	fprintf(fPRespuestas, "%d, %d, %s\n", id, 0, respuestas);
	fclose(fPRespuestas);
}

void cargarCSV (int id) {

}

Pregunta imprimirPregunta(Pregunta p) {
	if (p != NULL) {
		printf("P: %s", p.pregunta);
		
		char r = p.respuestas;
		char pR*;
		pR = strtok(r, ",");

		for (i = 1; i < 4; i++) {
			printf("%i. %s", i, pR);
			pR = strtok(NULL, ",");
		}
	}

	return p;
}