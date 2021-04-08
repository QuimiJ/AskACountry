#include <stdio.h>
#include "Pregunta.h"
#include "Usuario.h"

int main(void) {

	Pregunta pregunta;
	pregunta.id = 1;
	strcpy(pregunta.pregunta, "Cual es la montanya mas grande del mundo?");
	strcpy(pregunta.respuestas, "a. El Everest, b. El Mont Blanc");
	strcpy(pregunta.respuestaVerdadera, "El Everest");
	strcpy(pregunta.dificultad, "Facil");
	strcpy(pregunta.tipo, "Geografia");

	escribirCSV(pregunta.id, pregunta.pregunta, pregunta.respuestas, pregunta.respuestaVerdadera, pregunta.dificultad, pregunta.tipo);

    return(0);

    //FALTAN
    //Datos de prueba
    //Metodo cargarCSV
    //Imprimir por pantalla cosas para la demo
}
