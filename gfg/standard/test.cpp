#include<bits/stdc++.h>
using namespace std ;

bool compare (int a , int b){

 return a<b;

}

int main(){

  int a[]={5,8,4,6,10};

   sort(a,a+(sizeof(a)/sizeof(a[0])),compare);
  for(int i=0;i<5;i++)printf("%d",a[i]);


}
