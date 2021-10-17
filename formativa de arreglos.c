#include <stdio.h>

int mayit(int estadistica[3]){
int i,may;

int mayon=0;
for(i=0;i<3;i++){
printf("el numero mayor es: %i\n",mayon);

//if(estadistica[i]>mayon){

    mayon= mayon + estadistica [i];

}
printf("el numero mayor es: %i\n",mayon);



}

int main(){
int i,estadistica[3];
system ("color 70");

printf("escriba un numero entero \n",i+1);
for(i=0;i<3;i++){

    scanf("%i",&estadistica[i]);
  }

  for(i=0;i<3;i++){
    printf("  el arreglo original consta de %i\n",estadistica[i]);
  }
mayit(estadistica);

return 0;
}
