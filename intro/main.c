/***
 *  Author: German Velardez (germanvelardez16@gmail.com)
 * 
 *  Descripction:  Programa simple que utiliza la libreria estandar de lenguaje para
 *  enviar un mensaje por consola al usuario
 * 
 * 
*/

#include <stdio.h>

#define USER_MACRO                       ("#define se utiliza para definir una Macro.\n")


int main(void){
    
    // Este es un comentario de una sola linea
    printf("Hello world \n");   
    // La funcion printf se utiliza para enviar mensaje por consola  
    printf(USER_MACRO);                 
    return 0;
    // Termino el programa
}