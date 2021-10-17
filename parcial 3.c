#include <stdio.h>

/***********************************************
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
************************************************
*/



int main(){
system("color 70");
int empleados=3;
int i,ingre[3],salar[3];
int ingres1,ingres2,ingres3,salario1,salario2,salario3,bono1,bono2,bono3;

printf("\tbienvenido a UTP corporation\n");
printf(" \n");
  for(i=0;i<3;i++){
    printf("digite el a�o de ingreso del empleado\n");
    scanf("%i",&ingre[i]);
    if(ingre[i]<1950){
        printf("lo sentimos pero el a�o de ingreso no es valido por favor inserte una edad mayor a 1950\n");
        printf(" \n");

        system("exit");
    }
     fflush(stdin);
  }
  for(i=0;i<3;i++){
    printf("digite el salario mensual del empleado\n");
    scanf("%i",&salar[i]);
    if(ingre[i]<600){
        printf("lo sentimos pero el salario no puede ser menor al salario minimo(600$)\n");
        //system ("pause");
        system("exit");
    }
     fflush(stdin);
  }
aumen(ingre,salar);
//edades
for(i=0;i<1;i++){
    ingres1=ingre[i];
}
for(i=1;i<2;i++){
    ingres2=ingre[i];
}
for(i=2;i<3;i++){
    ingres3=ingre[i];
}

//salarios
for(i=0;i<1;i++){
    salario1=salar[i];
}
for(i=0;i<1;i++){
    salario2=salar[i];
}
for(i=0;i<1;i++){
    salario3=salar[i];
}

ingres1=2018-ingres1;
ingres2=2018-ingres2;
ingres3=2018-ingres3;


if(ingres1 >=10<15){
    bono1=salario1*0.15;
    }
    else if(ingres1>=15<20){
    bono1=salario1*0.20;
    }
    else if(ingres1>=20<30){
    bono1=salario1*0.30;
    }
    else if(ingres1>=30<41){
    bono1=salario1*0.50;
    }

if(ingres2 >=10<15){
    bono2=salario2*0.15;
    }
    else if(ingres2>=15<20){
    bono2=salario2*0.20;
    }
    else if(ingres2>=20<30){
    bono2=salario2*0.30;
    }
    else if(ingres2>=30<41){
    bono2=salario2*0.50;
    }

    if(ingres3 >=10<15){
    bono3=salario3*0.15;
    }
    else if(ingres3>=15<20){
    bono3=salario3*0.20;
    }
    else if(ingres3>=20<30){
    bono3=salario3*0.30;
    }
    else if(ingres3>=30<41){
    bono3=salario3*0.50;
    }
salario1=salario1+bono1;
salario2=salario2+bono2;
salario3=salario3+bono3;


printf("el salario + los bonos es bonos %i\n",salario1);
printf("el salario + los bonos es bonos %i\n",salario2);
printf("el salario + los bonos es bonos %i\n",salario3);

return 0;
}
int aumen(int ingresi[],int salari[])
{





}

