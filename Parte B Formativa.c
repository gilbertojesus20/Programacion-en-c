#include <stdlib.h> // librer�a para manejo de asignaci�n din�mica
#include <stdio.h>
#include <conio.h>
#include <string.h>
/*************************
MIT License

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
SOFTWARE.
*****************************************/

struct empleado {
   char nombre[20];
    int clave;
    float salario;
  };

void incrementar ( struct empleado *s, int num) {
    int i;
    for (i=0;i<num;i++){
     s[i].salario= s[i].salario*5/100 + s[i].salario;
     }
     }

 int adicionar ( struct empleado *s, int num)  {
      int mas, i;
      float sala;
  printf("\nInserte la cantidad de Articulos que va a colocar\n");
  scanf("%i",&mas);
  s=(struct empleado *) realloc (s,mas*sizeof(struct empleado));
  for (i=num;i<num+mas;i++)
  {  printf("\nEMPLEADO  %i\n",i+1);
     printf("\nEntre el nombre:");
     fflush(stdin);
     gets(s[i].nombre);
     printf("\nEntre la clave:");
     scanf("%i",&s[i].clave);
     printf("\nEntre el salario:");
     scanf ("%f",&sala); s[i].salario= sala;   }
     return mas ; }
int main ()

{
    system ("color f0");
    int i=0,num,mas=0;
    char salir;
    double pre;
    struct empleado *s ;


    printf("\nSistema de PLANILLA\n");
    printf("\nInserte la cantidad de empleados \n");
 // fflush(stdin);
    scanf("%i",&num);
    s=( struct empleado *) malloc (num*sizeof(struct empleado));
    printf("\nCREAR  Registros de empleado");
    for (i=0;i<num;i++){
        printf("\nEMPLEADO %i\n",i+1);
        printf("\nEntre el nombre:");
        fflush(stdin);
        scanf("%[^\n]",s[i].nombre);
        printf("\nEntre la clave:");
        scanf ("%i",&s[i].clave);
        printf("\nEntre el salario:");
        scanf ("%lf",&pre);
        s[i].salario = pre;
        }

  do{

  printf("\n\nQue desea hacer?\n");
  printf("\na. Agregar EMPLEADOS\nb. INCREMENTAR SALARIO\nc.Imprimir EMPLEADOS\nd.Salir\n");
  fflush(stdin);
  salir=getchar();
  system("cls");
  switch(salir)
  {
  case 'a':
     printf("\nAGREGAR EMPLEADOS\n");
     mas =  adicionar (s,num);
     num = num + mas;
       break;
 case 'b':
      printf("\nINCREMENTAR SALARIO\n");
      incrementar (s,num+mas);
      break;
  case 'c': //system("cls");
  printf("\nIMPRIMIR EMPLEADOS\n");
  for (i=0;i<num;i++)
  {  printf("\nEMPLEADO  %i\n",i+1);
     printf("\nnombre:");
     printf("%s",s[i].nombre);
     printf("\n clave:");
     printf("%i",s[i].clave);
     printf("\nSalario:");
     printf("%lf", s[i].salario );
   }
       break;
  case 'd':
  printf("\nEsta seguro/a que desea salir si");
  fflush(stdin);
    salir=getchar();
      break;
  default:  ;
 }
}while(salir!='s');
free (s);  // Libere espacio de la memoria asignado

getch();
return 0;
}
