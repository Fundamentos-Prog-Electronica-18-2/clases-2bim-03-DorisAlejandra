#include <iostream>
#include <sstream>

using namespace std;

string convertirInttoString(int v){
    stringstream ss;
    ss << v;
    string valor = ss.str();
    return valor;

}

string obtenerData(int a, int b, string nombre){

    int suma = a + b;
    string tipo = "";
    double promedio = suma / 2;

    if(promedio < 10)
        tipo = "Insuficiente";
    else{
        if((promedio >= 10.1)&&(promedio < 14))
            tipo = "Regular";

    else{
        if((promedio >= 14.1)&&(promedio < 16))
            tipo = "Bueno";
    else{
        if((promedio >= 16.1)&&(promedio < 18.5))
            tipo = "Muy bueno";

    else{
        if((promedio >= 18.6)&&(promedio < 20)){
            tipo = "Sobresaliente";
        }

    }
    string cadena = nombre +" tiene una calificacion de " + tipo + "\n";
    return cadena;
}
    }
    }
}


int main()
{
    string nombres[] = {"Alex", "Monica", "Alexander", "Sandra"};
    int bimestre1[] = {20, 15, 16, 19};
    int bimestre2[] = {20, 18, 10, 10};
    int suma = 0;
    double promedio = 0;


    for(int i = 0; i<4; i++){
        string data = obtenerData(bimestre1[i], bimestre2[i], nombres[i]);
        cout << data;
    }

    return 0;
}
