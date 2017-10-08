#include<bits/stdc++.h>
using namespace std;

struct Item{

    int  value;
    int weight;
};


bool compare(Item a ,Item b){

 double r1 = a.value/a.weight;
 double r2 = b.value/b.weight;
 return r1>r2;


}
printmaxval(int w ,Item arr[],int n){

sort(arr,arr+n,compare);
int nowweight=0;
double nowvalue=0.0;

for(int i=0;i<n;i++){


   if(arr[i].weight+nowweight<w){
       nowweight+=arr[i].weight;
       nowvalue+=arr[i].value;
   }
   else{

     int remain=w-nowweight;
     nowvalue+=((double)remain/arr[i].weight)*arr[i].value;
     break;

   }



}

cout<<nowvalue<<endl;




}

int main(){

  int w=50;
  Item arr[] ={{60, 10}, {100, 20}, {120, 30}};
  int n= sizeof(arr)/sizeof(arr[0]);
  printmaxval(w,arr,n);


}

