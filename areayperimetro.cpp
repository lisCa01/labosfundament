#include <stdlib.h>
#include <stdio.h>
#include <iostream>
using namespace std;

 int main()

 {
   float  radio=0;
   system ("cls");
   printf("\n**********");
   printf("\n* calculo del area y perimetro de un circulo *");
   printf("\n**********");
   printf("\n digite el valor del radio *");
   scanf("%f",&radio);
   printf("\n El area del circulo de radio  %4.2f es %4.2f", radio,3.1416*radio*radio);
   printf("\n El perimetro del circulo de radio %4.2f es %4.2f",radio,2*(3.1416)*radio);
   printf("\n");
   
   return 0;


 }
