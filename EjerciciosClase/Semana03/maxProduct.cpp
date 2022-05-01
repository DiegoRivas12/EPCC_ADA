#include <iostream>
using namespace std;
/*
PRODUCTO MAXIMO DE DOS NUMEROS
Dada un secuencia de n numeros no negativos y mayores que cero.
El objetivo es encontrar el mayor numero que se pueda obtener
multiplicando dos numerosa de esta secuencia
*/
int maxProduct(int*,int);


int main(){
    int lon=10;
    int valores[lon]={8,1,6,3,4,10,3,9,14,2};
    cout<<maxProduct(valores,lon)<<endl;
    return 0;
}

int maxProduct(int*A,int lon){
    int resultado=A[0];
    for(int i=0;i<lon;i++){//Recorre todo el array
        for(int j=i+1;j<lon;j++){//No es necesario analizar los numeros mas a la izquierd aa medida que avanza i
            if(A[i]*A[j]>resultado){
                resultado=A[i]*A[j];
            }
        }
    }
    return resultado;
}
