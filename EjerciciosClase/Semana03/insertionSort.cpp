#include<iostream>

void insertion_sort(int*,int);
void imprimir(int*,int);

int main(){

    int lon=7;
    int A[lon]={3,2,1,4,5,6,7};

    insertion_sort(A,lon);
    imprimir(A,lon);

    system("PAUSE");
  
    return 0;
}
/*
En el peudocodigo j empieza en 2 y i es mayor que cero
esto seria copnsiderando que los indices empiezan en 1,
pero en c++ empezamos en cero por eso

*/
void insertion_sort(int* A,int lon){
    int key,i;
    for(int j=1;j<lon;j++){
        key=A[j];
        i=j-1;
        while(i>=0 && A[i]>key){
            A[i+1]=A[i];
            i=i-1;
        }
        A[i+1]=key;
    }
}
void imprimir(int* A, int lon){
    for(int i=0;i<lon;i++){
        std::cout<<A[i]<<" ";
    }
    std::cout<<std::endl;
}