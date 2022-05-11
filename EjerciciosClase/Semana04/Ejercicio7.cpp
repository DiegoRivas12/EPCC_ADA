
/*
p=0;
for(i=1; i<n; i=i*2){
    p++;
}

i 1      |   i>=n           |   log(n)  n=8
  2      |   2^k>=n         |          i 1 
  2*2    |   lo2^k>=logn    |          i 2  O(logn)
  2*2*2  |   klog2>=logn    |          i 4
  2^k    |   k>=logn        |          i 8

p=logn no varia en el sigueinte for valor fijo
for(int j=1; j<p; j=j*2){
    statement;
}

j 1      |   j>=p            |   log(p)  p=3 (posible)
  2      |   2^k1>=p         |          j 1 
  2*2    |   lo2^k1>=logp    |          j 2  O(logp)->O(logn)
  2*2*2  |   (k1)log2>=logp  |          j 4
  2^k1    |   k1>=logp       |          j 8


  Complejidad -> O(logn+logn)
*/