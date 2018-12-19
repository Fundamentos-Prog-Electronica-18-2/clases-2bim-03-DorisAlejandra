#include <iostream>

using namespace std;

string  obtenerData(int a, int b, string nombre){
    string cadena;
    int suma = a + b;
    double promedio = suma /2;

    if (promedio <=10 ){
             cadena = nombre +"tiene un promedio " +"Insuficiente"+"\n";

    }else {
        if ((promedio>= 10.1)&& (promedio<=14)){
             cadena = nombre +"tiene un promedio " + "Regular" + "\n";
        }else {
            if ((promedio>= 14.1)&& (promedio<=16)){
                     cadena = nombre +"tiene un promedio " + "Bueno" +"\n";
            }else{
                if ((promedio>= 16.1)&& (promedio<=18.5)){
                     cadena = nombre +"tiene un promedio " + " Muy Bueno" +"\n";
                    }else {
                        if ((promedio>= 18.6)&& (promedio<=20)){
                             cadena = nombre +"tiene un promedio " + "Sobresaliente" + "\n";
                            }
                            }
                    }

            }
        }
    return cadena;
    }


int main()
{
    int bimestre1[] = {20, 15, 16, 19};
    int bimestre2[] = {20, 18, 10, 10};
    string nombres[] = {"Alex", "Monica", "Alexander", "Sandra"};
    for(int i = 0; i<4; i++){


        string data = obtenerData(bimestre1[i],bimestre2[i],nombres[i]);
        cout << data;

}
    return 0;
}
