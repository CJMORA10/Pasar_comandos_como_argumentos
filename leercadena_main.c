/*
 * Este programa muestra como leer varias palabras del teclado (stdin)
 * Codigo tomado de: https://www.programiz.com/c-programming/c-strings
 *
 * Modificado por: John Sanabria - john.sanabria@correounivalle.edu.co
 * Fecha: 2021-02-26
 */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *const cmd[] = {argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7], argv[8], argv[9], argv[10],  NULL};

if (argc > 1)
   execvp(cmd[0],cmd);
    else
    printf("Indique el programa que desea que se ejecute\n");

  return 0;
}


