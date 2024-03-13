
# Archivo Readme

Los archivos [Read.md](https://programminghistorian.org/es/lecciones/introduccion-a-markdown) contienen información que permite a terceros saber cómo utilizar el contenido alojado en el repositorio.

# Repositorio del repaso del lenguaje C

En este repositorio se alojará el código de los programas que realicemos en clase. Este repositorio se aloja en [Github](https://github.com/) y para acceder a él puede ser necesario que tengas una cuenta en esta plataforma.

## Listado de programas

1. **Intro**
   - *Descripción:* Introducción al lenguaje.
   - *Dependencias:* Las dependencias que utiliza este código son:
     - *stdio:* Es la librería estándar del lenguaje, en esta librería se define la función printf que se utiliza para enviar mensajes por consola.
   - *Compilar y ejecutar*: 
     Para compilar el código se necesitan ejecutar la siguiente instrucción:
     ``` bash 
     mkdir build 
     gcc intro/main.c -o build/intro.o 
     build/intro.o ```

2. **Condicional**
   - *Descripción:* Introducción a la estructura de control condicional if. Programa para determinar si un usuario es mayor de edad.
   - *Dependencias:* Las dependencias que utiliza este código son:
     - *stdio:* Es la librería estándar del lenguaje. Define la función printf, utilizada para enviar mensajes por consola.
   - *Compilar y ejecutar*: 
     Para compilar el código, se deben ejecutar las siguientes instrucciones:
     ```bash
     mkdir build
     gcc condicional/main.c -o build/condicional.o
     build/condicional.o
     ```
