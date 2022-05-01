#include <iostream>
#include <vector>
using namespace std;
/*
PRODUCTO MAXIMO DE DOS NUMEROS
Dada un secuencia de n numeros no negativos y mayores que cero.
El objetivo es encontrar el mayor numero que se pueda obtener
multiplicando dos numerosa de esta secuencia
*/
int maxProduct(vector<int>,int);


int main(){
    vector<int> valores{8,1,6,3,4,10,3,9,2,14};
    int lon=valores.size();
    cout<<maxProduct(valores,lon)<<endl;
    return 0;
}

int maxProduct(vector<int>A,int lon){
    int resultado=A[lon-1];

    int tmp=A[lon-1];//Valor que analizamos y mutiplicamos con todo los demas haciendo parejas
    for(int i=lon-2;i>=0;i--){//i recorre todos los numeros a la izquierda del numero analizado tmp
            if(tmp*A[i]>resultado){
                resultado=tmp*A[i];
            }
            if(!A.empty() && i==0){//Una vez que ya recorrimso todo el arreglo
                //tmp=tmp-1;
                A.pop_back();
                lon=A.size();
                tmp=A[lon-1];
            }
    }
    return resultado;
}
/*int maxProduct(int*A,int lon){
    int resultado=A[lon-1];
    for(int i=lon-1;i>=0;i--){//Recorre todo el array
        for(int j=i-1;j>=0;j--){//No es necesario analizar los numeros mas a la izquierd aa medida que avanza
            if(A[i]*A[j]>resultado){
                resultado=A[i]*A[j];
            }
        }
    }
    return resultado;
}*/

/*
int maxProduct(int*A,int lon){
    int resultado=A[0];
    for(int i=0;i<lon;i++){//Recorre todo el array
        for(int j=i+1;j<lon;j++){//No es necesario analizar los numeros mas a la izquierd aa medida que avanza
            if(A[i]*A[j]>resultado){
                resultado=A[i]*A[j];
            }
        }
    }
    return resultado;
}*/