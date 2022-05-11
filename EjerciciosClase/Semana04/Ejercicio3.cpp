#include<iostream>
#include<array>
using namespace std;
const int lon=10;
bool twoSum(array<int,lon>);//Si dos numeros de un arreglo que sean diferentes en posicion suman 10
int main(){

    const int lon=10;
    array<int,lon> arreglo;

    for(int i=0;i<lon;i++){
        arreglo[i]=i+1;
    }
    //Complejidad O(n^2)
    cout<<twoSum(arreglo)<<endl;
    return 0;
}

bool twoSum(array<int,lon> arreglo){
    for(int i=0;i<arreglo.size();i++){//O(n)
        for(int j=0;j<arreglo.size();j++){//O(n)
            if(i!=j && arreglo[i] + arreglo[j]==10)
               return true;
        }
    }
    return false;
}