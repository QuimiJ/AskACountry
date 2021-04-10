#include <stdio.h>
#include <string.h>
#include "Pregunta.h"
#include "Usuario.h"

int main(void) {
	//FALTAN
    //Datos de prueba
    //Metodo cargarCSV

	//Seccion que demuestra la introduccion de datos en ficheros CSV
	Pregunta pregunta;
	pregunta.id = 1;
	strcpy(pregunta.pregunta, "Cual es el monte mas grande del mundo?");
	strcpy(pregunta.respuestas, "a. El Everest,b. El Mont Blanc,c. El Gorbea");
	strcpy(pregunta.respuestaVerdadera, "El Everest");
	strcpy(pregunta.dificultad, "Facil");
	strcpy(pregunta.tipo, "Geografia");

	escribirCSV(pregunta.id, pregunta.pregunta, pregunta.respuestas, pregunta.respuestaVerdadera, pregunta.dificultad, pregunta.tipo);

	//Preguntas cargadas de los ficheros CSSV
	//POR HACER

	//Impresion de preguntas de prueba
	imprimirPregunta(pregunta);

    return(0);
}
