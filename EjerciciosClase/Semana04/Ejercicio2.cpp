#include<iostream>
#include<ctime>
using namespace std;

int devolver_indice(int*,int,int);//verificamos si un numeor esta en un arreglo y devolvemos el indice
void every_other(int*array,int lon,int number);
int main(){
  
    int lon=10;
    int* array=new int[lon];
    for(int i=0;i<lon;i++){
        array[i]=i;
    }
    //Complejidad O(n^2)
    every_other(array,lon,2);
    delete[] array;

    return 0;
}
void every_other(int*array,int lon,int number){
    int index;//indice del numero requerido
    int otherNumber;//Numero cualquiera
    int each_width_index=devolver_indice(array,number,lon);//verificamos si el numero se encuentra en el arreglo

    index=each_width_index;
    //cout<<index<<endl;
    srand(time(0));
    while(true){//O(n)
        if(index%2==0){
           otherNumber=rand()%lon;// //O(1) Generamos un numero que no salga del rango de elementos

           index=(number+otherNumber)%lon;//O(1)

           each_width_index=devolver_indice(array,number,lon);//O(n)
          
        }
        else{
           each_width_index=index;
           break;
        }
    }
    cout<<"El indice es :"<<each_width_index<<endl;
}
int devolver_indice(int* arreglo,int number,int lon){
    for(int i=0;i<lon;i++){
        if(number==arreglo[i])
          return i;
    }
    return -1;
}
