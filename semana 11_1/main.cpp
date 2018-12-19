
#include <iostream>

using namespace std;

int main()
{
    int suma = 0;
    double promedio = 0;
    string valores[4];
    valores[0] = "20";
    valores[1] = "30";
    valores[2] = "40";
    valores[3] = "50";
    cout << valores <<endl;

    for(int i = 0; i<=3; i++){
        suma = suma + valores[i];
        cout << valores[i] <<endl;
    }
    promedio=suma/4;
    cout <<"el promedio es " << promedio;
    return 0;
}
