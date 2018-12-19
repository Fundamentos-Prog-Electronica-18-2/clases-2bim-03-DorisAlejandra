
#include <iostream>
#include <sstream>

using namespace std;

string convertirString(int v){
    // proceso para convertir un entero en cadena
    stringstream ss;
    ss << v;
    string valor = ss.str();
    return valor;
}

string  obtenerData(int a, int b, string nombre){
     int suma = a + b;
    string cadena = nombre +" tiene una calificación de " + convertirString(suma) + "\n";
    return cadena;

}

int main()
{
    int calificacion = 0;
    int bimestre1[] = {19, 15, 16, 17};
    int bimestre2[] = {10,15,20,10};
    string nombres[]= {"Luis","Maria","Jose","Ana"};

    for (int i = 0; i <= 3; i++){

           string  data =obtenerData(bimestre1[i], bimestre2 [i],nombres[i]);

            cout << data;
    }

    return 0;
}
