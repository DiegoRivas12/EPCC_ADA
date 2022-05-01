#include <iostream>
using namespace std;
int maxProduct(int*,int);


int main(){
    int lon=10;
    int valores[lon]={8,1,6,3,4,10,3,9,14,2};
    cout<<maxProduct(valores,lon)<<endl;
    return 0;
}

int maxProduct(int*A,int lon){
    int resultado=A[0];
    for(int i=0;i<lon;i++){
        for(int j=i+1;j<lon-1;j++){
            if(A[i]*A[j]>resultado){
                resultado=A[i]*A[j];
            }
        }
    }
    return resultado;
}