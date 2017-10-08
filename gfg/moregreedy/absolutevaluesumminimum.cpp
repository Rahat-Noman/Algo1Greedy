#include<bits/stdc++.h>
using namespace std ;

 printsumofminimumabsolutevalue(int a[],int b[],int n){


    sort(a,a+n);
    sort(b,b+n);

    int i,sum=0;
    for(i=0;i<n;i++){

      sum+=abs(a[i]-b[i]);

    }
    printf("minimum sum is %d",sum);




 }





int main(){

      int a[] = {4, 1, 8, 7};
      int b[] = {2, 3, 6, 5};
      int n= sizeof(a)/sizeof(a[0]);
      printsumofminimumabsolutevalue(a,b,n);

}
