
#include <iostream>

using namespace std;

int main()
{
    int calificacion = 0;
    int bimestre1[] = {19, 15, 16, 17};
    int bimestre2[] = {10,15,20,10}
    string nombres[] = { "Luis" ,"Maria" , "Jose" , "Ana"};

    for (int i = 0; i <= 3; i++){
            calificacion =  bimestre1[i]+ bimestre2[i];
            cout << nombres[i] << "tiene una calificacion de "<<calificacion<<endl;
    }

    return 0;
}
