#ifndef PREGUNTA_H_
#define PREGUNTA_H_

    typedef struct {
        int id;
        char pregunta[50];
        char respuestas[300];
        char dificultad[10];
        char tipo[10];
        int correcta;
    } Pregunta;

    void escribirCSV(int id, char pregunta[50], char respuestas[300], char dificultad[10], char tipo[10],
    		int correcta);

    Pregunta cargarCSV(int id);

    Pregunta imprimirPregunta(Pregunta p);

#endif
