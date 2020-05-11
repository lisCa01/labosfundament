#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
double a, b, c, formula;
cout << "ecuacion cuadratica\n";
cout << "introduzca el coeficiente \"a\":";
cin >> a;
cout << "introduzca el coeficiente \"b\":";
cin >> b;
cout << "introduce el coeficiente \"c\":";
cin >> c;

formula= (-b + sqrt (b*b-4*a*c)/2*a);

cout <<"resultado:" <<endl<<formula<<endl;

return 0;
}