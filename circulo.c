/* Área y Perímetro de un Círculo
	Descripcion: Escribir un programa en C que pida al usuario el radio de un círculo y calcule tanto el área 
    como el perímetro.
	Ejemplo de ejecución
	- Ingrese el radio del círculo: 5  
	- El área del círculo es: 78.54  
	- El perímetro del círculo es: 31.42 */

#include <stdio.h>

int main () {

float radio;
float area;
float perimetro;

printf("Hola, este programa te dara el area y permitre de un circulo, \n Ingrese el radio de circulo:\n");
scanf("%f", &radio);

area = radio * radio * 3.1416;
perimetro = 2 * 3.1416 * radio;

printf("El area del circulo es : %.2f\n", area);
printf("El perimtero del circulo es : %.2f\n", perimetro);

return 0;

}
