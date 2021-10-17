#include <stdio.h>
#include <string.h>
//#include <gotoxy.h>
/*MIT License

Copyright (c) [year] [fullname]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE. */
struct arreglo{
  int cante;

  char flor[15];};

 void actualizar(struct arreglo vf[],int cod_flor,int cant_vendida, int existencia){


  existencia= vf [cod_flor].cante - cant_vendida;
   }

int main(){
   int i,existencia,cant_vendida,opcion ;
   char nomf[15], resp='S';
   struct arreglo flores[3];
   printf ("VAMOS A SURTIR EL PUESTITO, PUES VIENE EL DIA DE LAS MADRES,HAGA SU PEDIDO\n");
   for (i= 1; i<=3; i++)
   {  printf ("Ingrese el nombre de la flor 1. ROSA 2. GARDENIAS  3. GERANIOS:   \n");
            scanf("%s",nomf);flores[i-1].flor;
            printf ("Ingrese la cantidad en existencia de cada flor\n");
            scanf ("%i",&existencia);
            strcpy(flores[i-1].flor,nomf);
              flores[i-1].cante= existencia;}
           printf("ELIJA EL ARREGLO QUE DESEA PEDIR \n 1. ROSAS 2. GARDENIAS 3.GERANIOS 4.Salir\n");
           printf ("Ingrese la opci�n deseada");
           scanf ("%i",&opcion );
           while (opcion >= 1 && opcion <= 3){

             printf ("Ingrese la cantidad pedida");
             scanf ("%i", &cant_vendida );
              if (flores[opcion-1].cante  > cant_vendida )
             actualizar(flores,opcion-1,cant_vendida,existencia);
             else
                printf ("No podemos hacer efectivo su pedido, solo tenemos esta cantidad %i ", flores[opcion-1].cante );
             printf ("DESEA HACER OTRO PEDIDO ELIJA EL ARREGLO QUE DESEA PEDIR \n 1. ROSAS 2. GARDENIAS 3.GERANIOS 4.Salir\n");
             scanf ("%i",&opcion);               }
       system("cls");    system("color 8F");
       /*gotoxy (15,5); */ printf("CANTIDAD DE FLORES EN EXISTENCIA");
        for (i= 0; i<3; i++){
       /*gotoxy (20,8+i);*/ printf ("%s ,%i",flores[i-1].flor, flores[i].cante);}
  return 0;    }







