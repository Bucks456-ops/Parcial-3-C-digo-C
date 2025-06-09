#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, intento, intentos = 0;
    const int MAX_INTENTOS = 5;

    // Inicializa la semilla para el generador de números aleatorios
    srand(time(0));
    numero_secreto = rand() % 100 + 1; // Número entre 1 y 100

    printf("¡Bienvenido al juego de adivinar el número!\n");
    printf("He elegido un número entre 1 y 100. Tienes %d intentos para adivinarlo.\n", MAX_INTENTOS);

    while (intentos < MAX_INTENTOS) {
        printf("Ingresa tu intento: ");
        scanf("%d", &intento);
        intentos++;

        if (intento < numero_secreto) {
            printf("El número es mayor que %d. Prueba de nuevo.\n", intento);
        } else if (intento > numero_secreto) {
            printf("El número es menor que %d. Prueba de nuevo.\n", intento);
        } else {
            printf("¡Felicidades! Has adivinado el número en %d intentos.\n", intentos);
            break;
        }

        if (intentos == MAX_INTENTOS) {
            printf("Lo siento, has utilizado todos tus intentos. El número era %d.\n", numero_secreto);
        }
    }

    return 0;
}