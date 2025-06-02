#include <stdio.h>

int main() {
char operador;
double num1, num2, resultado;
printf("Selecciona una operación:\n");
printf(" 1 para suma\n");
printf(" 2 para resta\n");
printf(" 3 para multiplicación\n");
printf(" 4 para división\n");
    
    
printf("Introduce el operador: ");
scanf(" %c", &operador);
printf("Introduce el primer número: ");
scanf("%lf", &num1);
printf("Introduce el segundo número: ");
scanf("%lf", &num2);

switch (operador) {
case '1':
resultado = num1 + num2;
printf("%.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
break;
case '2':
resultado = num1 - num2;
printf("%.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
break;
case '3':
resultado = num1 * num2;
printf("%.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
break;
case '4':
if (num2 == 0) {
printf("Error: No se puede dividir entre cero.\n");
} else {
resultado = num1 / num2;
printf("%.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
}
break;
default:
printf("Error: Operador no válido.\n");
}
return 0;
}