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
    void  main()
    //comparar numeros cual es el mas grande

          {   int n1,n2,n3,mayor ;
          system("cls");
      system ("color 70");
         printf("Introduzca tres diferentes n�mero\n");
         scanf("%d %d %d", &n1,&n2, &n3);

    if    (n1 != n2 && n1 != n3 && n2 != n3 )
    printf("LOS TRES NUMEROS SON DIFERENTES  Y SON %d %d  %d : \n", n1,n2,n3);
    if (n1>n2 &&  n1>n3)
     mayor=n2;
        else if (n2>n1 && n2>n3 )
        mayor=n2;
    else if (n3>n1 && n3>n2 )
        mayor=n3;
    printf("El numero mayor es: %i",mayor);



    getch();       }
