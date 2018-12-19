#include <iostream>

using namespace std ;

int main()
{
    int  valores[4];
    valores[0] = 20;
    valores[1] = 30;
    valores[2] = 40;
    valores[3] = 50;
    int i = 0;
    int suma = 0;
    double promedio = 0;

    while (i<4){
        suma = suma + valores[i];
        i = i + 1;
    }
    promedio=suma/4;
    cout <<"el promedio es " << promedio;
    return 0;
}
