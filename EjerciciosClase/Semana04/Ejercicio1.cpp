#include<iostream>
/*
El proposito de este codigo es hallar el maximo valor de un arreglo
*/
using namespace std;
int greatestNumber(int*);
int main(){

    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int mayor;
    
    //Complejidad O(n^2)
    for( int i : array ) {//O(n)
        bool isValTheGreatest=true;
        for(auto j : array){//O(n)
            if(j>i)
              isValTheGreatest=false;
        }
        if(isValTheGreatest)
           mayor=i;
    }

    cout<<"El numero amyor del arreglo es:"<<mayor<<endl;

    return 0;
}
