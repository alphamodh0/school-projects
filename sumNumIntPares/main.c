#include <stdio.h>

// Función para validar la entrada del usuario
void validarUserIn(char* mensajeUsuario, int *userIn){
    int valido = 0;
    do {
        printf("%s", mensajeUsuario);
        valido = scanf("%d", userIn);
        if (valido == 0) {
            printf("Entrada incorrecta, vuelva a intentar!");
            // Limpia el buffer de entrada
            while(getchar() != '\n');
        }
    } while (valido == 0); // Repite hasta que la entrada sea válida
}

// Función para sumar los números enteros pares en un rango
int sumNumIntP(int elemInic, int elemFin){
    int cont = elemInic;
    int cantNumIntP = 0;
    while (cont >= elemInic && cont <= elemFin){
        if (cont % 2 == 0)
            cantNumIntP++;
        cont++;
    }
    // Devuelve la cantidad de números pares
    return cantNumIntP;
}

// Función para mostrar el resultado
void mostrarResultado(int resultado){
    printf("La cantidad de n\xA3meros enteros pares en el rango dado es: %d\n", resultado);
}

// Función principal
int main(void)
{
    int numInic = 0;
    int numFin = 0;

    validarUserIn("Inserte un n\xA3mero entero como inicio del rango: ",&numInic);

    validarUserIn("Inserte un n\xA3mero entero como final del rango: ",&numFin);

    // Muestra el resultado de la suma de los números enteros pares en el rango
    mostrarResultado(sumNumIntP(numInic, numFin));
    return 0;
}
