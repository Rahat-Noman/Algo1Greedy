#include<bits/stdc++.h>
using namespace std;
int coin[]={1,2,5,10,20,50,100,500,1000};
int n = sizeof(coin)/sizeof(coin[0]);


void findmin(int v){

    vector<int>ans;


   for(int i= n-1;i>=0;i--){

    while(v>=coin[i]){

       ans.push_back(coin[i]);
       v-=coin[i];
    }

   }
  for(int j=0;j<ans.size();j++){

    printf("%d\t",ans[j]);

  }


}


int main(){

   int v;
   scanf("%d",&v);
   findmin(v);
}
