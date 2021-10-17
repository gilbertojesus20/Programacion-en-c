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



/*este programa simula un cajero automatico con un saldo inicial de 500 dolares*/

int main(){
 int selec,reti,saldi,depo,b1, b5, b10;
 float saldillo;
char resp;

float saldo[1]={1000};

resp='s';

 while (resp=='s'){
        system("cls");
 system("color 70");
 printf("\n\t\t\tBienvenido/a al cajero UTP\n\n");
 printf("\tEscoja una de las opciones\n\n");
 printf("1. Deposito\n");
 printf("2. Retiro\n");
 printf("3. Consultar Saldo\n");
 printf("4. Salir\n\n");
 printf("Elija el numero de la opcion: ");
scanf("%i",&selec);

switch(selec){
   case 1: printf("cuanto dinero desea depositar en la cuenta:");
scanf("%d",&depo);//
saldo[0] += depo;
printf ("Su nuevo saldo en cuenta es :%.3lf\n",saldo[0]);
break;


case 2: printf("cuanto dinero desea retirar en la cuenta: ");
scanf("%d",&reti);
if(reti <=0){
    printf("la cantidad a retirar no puede ser negativa");
}
else if(reti >saldo[0]){
    printf("la cantidad a retirar es mayor a su saldo disponible");
}
else{
 saldo[0] -= reti; //arreglo tambien
 printf("su nuevo saldo es de:%.3lf\n",saldo[0]);

    b10 = calcularb(reti, 10);
    b5 = calcularb(reti - b10*10, 5);
    b1 = reti - b10*10 - b5*5;

    printf("EL cajero le acaba de dispensar  %d billete de $10, %d billete de $5, %d billete de 1$\n", b10, b5, b1);
break;
case 3: printf("Su saldo es: %.3lf\n",saldo[0]);

break;
case 4: break;
default: printf("Usted se ha equivocado intentelo denuevo");
}
return 0;
}
printf("desea hacer otra operacion? s/n\n");
scanf("%s",&resp);
fflush(stdin);
}
}

int calcularb(int din, int den){
    int bill = (din - din%den)/den;
    return bill;
}

