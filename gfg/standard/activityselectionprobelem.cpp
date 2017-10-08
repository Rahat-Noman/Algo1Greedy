//you are given n activities with their starting and finishing time select
// the maximum number of activities  that can be performed assumuming a person can
//do one work at a time


#include<bits/stdc++.h>
using namespace std;

void printmaxactivity(int s[],int f[],int n ){

    int i=0,j;
    printf("%d ",i);
    int fi=f[0];

    for(i=1;i<n;i++){
         if(s[i]>fi){
            printf("%d ",i);
            fi=f[i];
         }

    }


}



int main(){

    int s[]={1,3,0,5,8,5};
    int f[]={2,4,6,7,9,9};
    int n = sizeof(s)/sizeof(s[0]);
    printmaxactivity(s,f,n);


}
