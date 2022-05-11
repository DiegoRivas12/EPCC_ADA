
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