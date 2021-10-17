#include <stdio.h>




int main(){

    system ("color 70");

 int i,usi,lista1[usi],lista2[usi];
  printf("introduzca un el tamaño de array\n");
  scanf("%i",&usi);
  for(i=0;i<usi;i++){
    printf("digite un numero ",i+1);
    scanf("%i",&lista1[i]);
  }


usi=0;


  printf("introduzca el tamaño de array\n");
  scanf("%i",&usi);

   for(i=0;i<usi;i++){
    printf("digite un numero",i+1);
    scanf("%i",&lista2[i]);
  }


  ordenar(lista1,lista2);

return 0;

}

void ordenar(int lista1[],int lista2[],int tamit2){

for(int a = 0; a < 10; a++) printf("%d\n", lista1[a]);


printf("todo bien por aca");
/*int suma[20];
int i;

for(i=0;i<4;i++){
    suma[i]= lista1[i]+lista2[i];
}

for(i=0;i<4;i++){
printf("%i",suma[i]);
	}
printf("\n");
////////////////////


/*if(lista1 == lista2) {

for(i=0;i<1000;i++){
    suma[i]= lista1[i]+lista2[i];
}

for(i=0;i<1000;i++){
printf("%i",suma[i]);
	}
	else{

	printf("ERROR DE VALIDACION los arreglos no son diferentes");
	}
*/

return 0;
}

