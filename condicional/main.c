/***
 *  Author: German Velardez (germanvelardez16@gmail.com)
 * 
 *  Descripction:  Presentacion de las instrucciones que se ejecutan 
 *  de manera condicional (estructura if)
 * 
 * 
*/

#include <stdio.h>
#define ADULT_AGE                      (18)


#define USER_NAME                   ("Juan Pablo")
#define USER_AGE                       (18)


int main(void){
    
    // Este es un comentario de una sola linea
    printf("El usuario %s tiene %d años de edad.\n",USER_NAME,USER_AGE);   
    // La funcion printf se utiliza para enviar mensaje por consola  
    if(USER_AGE >= ADULT_AGE){
        printf("El usuario es un adulto \n");
    }
    else{
        printf("El usuario es menor de edad \n");
    }
    return 0;
    // Termino el programa
}