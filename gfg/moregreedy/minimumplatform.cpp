#include<bits/stdc++.h>
using namespace std;

printminimumplatform(int arr[],int dep[],int n){

  sort(arr,arr+n);
  sort(dep,dep+n);


    int r=1;
    int platformneeded=1;
    int next=1;
    int now=0;
    while(1){

            if(next>n||now>n)break;

        if(arr[next]<dep[now]){
            platformneeded++;
            next++;
            r=max(r,platformneeded);
        }
        else{
            platformneeded--;
            now++;
        }


    }
    printf("max %d platform is needed\n",r);

  }








int maina(){


    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dep[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = sizeof(arr)/sizeof(arr[0]);
    printminimumplatform(arr,dep,n);

}
