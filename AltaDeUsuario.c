/* ⁠Programa para alta de usuario
	Descripción: Escribir un programa en C que solicite al usuario su nombre, edad y altura, y luego muestre 
    esa información en pantalla.
	Ejemplo de ejecución:
        - Ingrese su nombre: Juan Pérez  
        -  Ingrese su edad: 25  
        - Ingrese su altura en metros: 1.75  

	Salida: 
		Hola Juan Pérez, tienes 25 años y mides 1.75 metros
*/

#include <stdio.h>

int main() {
    
    char nombre[20];
    float altura;
    int edad;
    char cuidad[20];
    char sexo[20];

    printf("ingrese su nombre:\n"); // imprime en pantalla
    scanf ("%s", nombre) ; // lee el nombre                                                   

    printf("ingrese su edad:\n"); // imprime en pantalla
    scanf ("%i", &edad) ; // lee la edad

    printf("ingrese su altura en metros:\n"); // imprime en pantalla
    scanf ("%f", &altura) ; // lee la altura


   printf("Hola %s , tienes %i años y mides %.2f metros, excelente ya puedes programar\n",nombre, edad, altura); // imprime en pantalla


   printf("Ahora otro nivel, podrias ingresar la cuidad donde vives, por favor\n");
scanf ("%s", cuidad);

printf("Gracias, continuemos...\n");

printf("Podrias ingresar tu genero ?\n");
scanf ("%s", sexo);

printf("Muy bien, ahora completemos tu  informacion... dejame volver a acumular la info...\n");

printf("Hola %s , tienes %i años y mides %.2f metros, vives en la cuidad de %s y tu genero es %s\n",nombre, edad, altura, cuidad, sexo); // imprime en pantalla

printf("Gracias por tu tiempo, hasta la proxima\n");



   return 0;
}







