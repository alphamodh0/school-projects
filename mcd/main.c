#include <stdio.h>

// Función para calcular el MCD
int mcd(int a, int b) {
    if (a < 0 || b < 0) {
        return 0;
    }
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Función para validar la entrada del usuario
void validarUserIn(char* mensajeUsuario, int *userIn){
    int valido = 0;
    do {
        printf("%s", mensajeUsuario);
        valido = scanf("%d", userIn);
        if (valido == 0 || *userIn == 0) {
            printf("Entrada incorrecta, vuelva a intentar! Recuerde que el n\xA3mero tiene que ser un entero distinto de 0.\n");
            // Limpia el buffer de entrada
            while(getchar() != '\n');
        }
    } while (valido == 0 || *userIn == 0); // Repite hasta que la entrada sea válida
}

// Función principal
int main() {
    int a = 0;
    int b = 0;

    validarUserIn("Inserte el primer n\xA3mero: ",&a);
    validarUserIn("Inserte el segundo n\xA3mero: ",&b);

    int resultado = mcd(a, b);
    if (resultado != 0)
        printf("El MCD de %d y %d es %d\n", a, b, resultado);
    else printf("La pareja de n\xA3meros no posee MCD\n");
    return 0;
}
