//Caso equivalente al ejercicio
/*
for(i=1; i<n; i=i*2){
    statement;
}

i 1      |   i>=n           |   log(n)  n=8
  2      |   2^k>=n         |          i 1 
  2*2    |   lo2^k>=logn    |          i 2  O(logn)
  2*2*2  |   klog2>=logn    |          i 4
  2^k    |   k>=logn        |          i 8

*/

//Ejercicio
/*
for(i=0; i*i<n ; i++){
    statement
}
             
i 1      |   n<i           |   log(n)  n=8 (i*i<n)
  2      |   n<i*i         |          i 1 -> 1
  3      |   n<i*i*i       |          i 2 -> 4 O(logn)
  4      |   n<i^k         |          i 3 -> 8
  k      |   logn<k        |          i 4 -> 16
*/