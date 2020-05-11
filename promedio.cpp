#include <iostream> 

using namespace std;

int main()
{
    int num1 ;
    int num2 ;
    int num3;
    int promedio;

printf ("ingrese primera cantidad :");
scanf("%i",&num1);
printf ("ingrese segunda cantidad :");
scanf ("%i",&num2);
printf ("ingrese tercera cantidad :");
scanf ("%i",&num3);
promedio = (num1+num2+num3)/3;

printf ("el resultado es : %i \t",promedio);


    return 0;
}

