/*
MIT License

Copyright (c) 2021 gilbertojesus20

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
#include <conio.h>
#include <stdlib.h>
 #include <math.h>
 
 //operador monario
int main () {
    system("cls");
      system ("color 70");
 int a = 4;
 int x1 = 13;
 printf ("\n OPERADOR MONARIO:  %i", ++a);
 printf ("\n OPERADOR MONARIO: %i",a++);
 printf ("\n EXPRESION: %lf\n",( -2  * pow (8,2) /  a));
 printf ("\n EXPRESION : %lf\n",	 100 / 50 * 3 +sqrt (81) * 4);
 printf ("\n EXPRESION : %lf\n", 23%7 + 9.5 -56/5);
 printf (" \n OPERADOR DE ASIGNACION:    %i\n", (a+=3*3/3));
 printf ("\n RAIZ:  %lf",sqrt (4) );
 printf("diferentes formatos:n%o %x %i", x1, x1, x1);

 return 0;}
