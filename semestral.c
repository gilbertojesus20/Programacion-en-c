#include <stdio.h>
#include <stdlib.h>//presp
/****
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
*/
struct estudiante{
char ced[12];
double notas[5];
};
void ordenar (struct estudiante *notase, int n)  {////estudiante
double tempo;
int  x, i=0,  j;
for (x= 0;x<n;x++){
do {
for (j = i+1;j<5;j++)
if ((notase+x)->notas[i]<=(notase+x)->notas[j]) {
tempo = (notase+x)->notas[i] ;
(notase+x)->notas[i] = (notase+x)->notas[j];
(notase+x)->notas[j] = tempo;
}
i = i+1;
}while (i <=4);
i=0; }}

 void calcularN(struct estudiante *clase, int tot, double *notf){//notase   double
int i,x;
for(x=0;x<tot;x++){
for(i=0;i<3; i++)
   *(notf+x) = (clase+x)->notas[i]+ *(notf+x) ;//resp
   *(notf+x)=  *(notf+x)/3;}
}



void cerrar (FILE *notas){//resp
fclose (notas);//resp
 }






int main(){
struct estudiante *clase;
int op, nestu,x=0,p;
double *notaf;
FILE *notas;
char ced[12];
double notf;
system("color 70");
/*colores navide�os para el codigo
system("color 70");

*/

do{
  printf("\n\nQUE DESEA HACER?\n");
  printf("\n1. CREAR EL ARCHIVO DE NOTAS\n2. LISTADO DE LAS NOTAS DE LOS ESTUDIANTES \n3. SALIR\n");
  scanf ("%i",&op);
  switch(op)
  {
   case 1:
    printf("Ingrese numero de estudiantes\n");
    fflush(stdin);
    scanf("%i",&nestu);
    while(nestu<=0){
    printf("Numero de estudiante no puede ser menor ni igual a 0. Intente nuevamente.\n");
    fflush(stdin);
    scanf("%i",&nestu);}
    notas = fopen ("clase.txt" ,"w");//resp
    notaf = (double *) calloc (nestu,sizeof(double));
    clase = (struct estudiante*) malloc(nestu*sizeof(struct estudiante));
    if(clase!= NULL){
        for(x=0;x<nestu;x++){
        printf("Ingrese la cedula del estudiante #%i\n",x+1);
        fflush(stdin);
        gets((clase+x)->ced);
        fflush(stdin);
        for(p=0;p<5;p++){
         printf("Ingrese la nota #%i del estudiante #%i\n",p+1,x+1);
          scanf("%lf",&(clase+x)->notas[p]);
         while((clase+x)->notas[p]<0 || (clase+x)->notas[p]>100){
           printf("Nota del parcial #%i del estudiante #%i incorrecto. Ingrese nuevamente\n",p+1,x+1);
           fflush(stdin);
           scanf("%lf",&(clase+x)->notas[p]);   }    }    }
           ordenar (clase, p);
           calcularN(clase,p,notaf);
           for(x=0;x<nestu;x++)
           fprintf (notas,"%s %lf\n", (clase+x)->ced,*(notaf+x) );
           cerrar(notas);}
       else
        printf("El espacio no se ha podido asignar");
            break;
       case 2:
       notas = fopen ("clase.txt" ,"r");//resp
       printf("\nCEDULA        NOTA FINAL \n");
       if (notas!=NULL){
         while (!feof(notas)){
         fscanf(notas,"%s %lf\n",ced, &notaf);
         printf("%s               %lf\n",ced, notf);}
         cerrar(notas);}
        else printf ("EL ARCHIVO NO EXISTE");
        free(notaf); free(clase);break;
         case 3:
         printf("DESEA REALIZAR OTRO PROCESO INTRODUZCA UN VALOR ENTRE 1 Y 3 \n");
         printf("profesora le deseo una feliz navidad y prospero a�o nuevo 2020 \n");
        break;
        default:  ;
 }
}while(op>=1&&op<3);
return 0;
}
