#include <stdio.h>
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
int main (){
    int calo;

system ("color 70");
printf("bienvenidos al corredor seleccione su tipo de vehiculo\n");
printf("presione 1 para turismo\npresione 2 para autobus\npresione 3 para moticicleta\n");
scanf("%i",&calo);

switch (calo){
 case 1: printf("su costo de peaje en el corredor es de 500$\n");break;
 case 2: printf("su costo de peaje en el corredor es de 3000$\n");break;
 case 3: printf("su costo de peaje en el corredor es de 300$\n");break;

default: printf("no puedes entrar por el corredor ACCESO DENEGADO\n");

}

return 0;

}
