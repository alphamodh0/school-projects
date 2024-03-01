#include <stdio.h>

// Función para validar la entrada del usuario
void validarUserIn(const char* mensajeUsuario, int *userIn) {
    int valido = 0;
    do {
        printf("%s", mensajeUsuario);
        valido = scanf("%d", userIn);
        if (valido == 0) {
            printf("Entrada incorrecta, vuelva a intentar!\n");
            // Limpia el buffer de entrada
            while (getchar() != '\n');
        }
    } while (valido == 0); // Repite hasta que la entrada sea válida
}

// Función para comparar dos números enteros
int compararSigno(int num1, int num2) {
    if ((num1 > 0 && num2 > 0) || (num1 < 0 && num2 < 0)) {
        // Tienen el mismo signo
        return 0;
    } else {
        // Tienen signos diferentes
        return 1;
    }
}

int main(void) {
    int numero1 = 0;
    int numero2 = 0;

    validarUserIn("Ingresa el primer n\xA3mero entero: ", &numero1);
    validarUserIn("Ingresa el segundo n\xA3mero entero: ", &numero2);

    int resultado = compararSigno(numero1, numero2);

    if (resultado == 0) {
        printf("Los n\xA3mero tienen el mismo signo.\n");
    } else {
        printf("Los n\xA3mero tienen signos diferentes.\n");
    }

    return 0;
}
