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
int main() {

system("cls");
system ("color 70");

    char operator;
    double n1, n2;
    printf("introduzca un operador (+, -, *, /): ");
    scanf("%c", &operator);
    printf("introduzca 2 operandos ");
    scanf("%lf %lf",&n1, &n2);
    switch(operator)
    {
        case '+':
            printf("el resultado es %.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;
        case '-':
            printf("el resultado es %.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;
        case '*':
            printf("el resultado es %.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;
        case '/':
            printf("el resultado es %.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
       
        default:
            printf("Error!  el operador no es correcto");
    }
    return 0;
}
