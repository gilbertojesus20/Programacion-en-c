/*
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
#include <stdio.h>
#include <stdlib.h>

struct edificio{
int codE;
float tempE;};

int main (){

int cod,tam,i;
float temp,tempf;
printf ("Defina la cantidad de edificios");
scanf ("i%",&tam);
struct edificio tempi[tam];
tempi=malloc(tam*sizeof(float));
if (tempi==NULL);
    printf("\nMemoria insuficiente");
for(i=1;i<=tam;i++){
    printf("\nInserte el codigo del edifico %i",i);
    scanf ("%i",&cod);tempi[i-1].codE=cod;
    printf("\nInserte la temperatura en Fahrenheit del edificio %i",i);
    scanf("%i",&temp);
    tempf = (temp-32);
    tempi[i].tempE=tempf;
}
for (i=0;i<tam;i++)
    printf("\nLa nueva temperatura del edificio con codigo %i es %lf ",tempi[i].codE,tempi[i].tempE);
return 0;
}