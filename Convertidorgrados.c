/*⁠ ⁠Conversión de Temperatura
	Descripción: Escribir un programa en C que convierta temperaturas de grados Celsius a Fahrenheit.
	Ejemplo de ejecución:
    - Ingrese la temperatura en grados Celsius: 30  
	- La temperatura en Fahrenheit es: 86.0°F

    */


    #include <stdio.h>  


    int main () {

    float celsius;
    float conver;


    printf("Hola Este es un convertidor de grados Fahrenheit a Celsius \n");
    printf("Por favor igresar grados celsius a convertir. \n");
    scanf ("%f", &celsius);

    conver = 1.8 * celsius + 32;
    printf ("La conversion de grados Fahrenheit es : %.2f Fahrebheit\n", conver);


    return 0;

    }



    


