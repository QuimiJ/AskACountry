#ifndef PREGUNTA_H_
#define PREGUNTA_H_


    typedef struct {
        int id;
        char pregunta[150];
        char respuesta1[100];
        char respuesta2[100];
        char respuesta3[100];
        char dificultad[10];
        char tipo[10];
        int correcta;
    } Pregunta;

    void escribirCSV(int id, char pregunta[150], char respuestas1[100], char respuestas2[100], char respuestas3[100], char dificultad[10], char tipo[10],
    		int correcta);

    Pregunta cargarCSV(int id);

    Pregunta imprimirPregunta(Pregunta p);

#endif
