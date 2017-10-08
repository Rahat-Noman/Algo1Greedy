#include<bits/stdc++.h>
using namespace std;
struct job
{

    char jobid;
    int deadline;
    int profit;


};

bool jobcompare(job a ,job b){

    return a.profit>b.profit;

}


void printmaxprofitsequence(job j[],int n){

  int i;
  int ans=0;
  int slot[10];
  int result[10];
  for( i=0;i<n;i++){
    slot[i]=0;
  }
  printf("asvdv");
  sort(j,j+n,jobcompare);
  for(i=0;i<n;i++)
  {
      cout<<j[i].profit<<endl;
  }
  printf("afer");
  for( i =0;i<n;i++){
    cout<<"first loop" <<endl;
    for(int k=j[i].deadline-1 ; k>=0;k--){
      //  cout<<j[i].deadline<<" "<<j[i].jobid<<" "<<j[i].profit<<" "<<k<<" "<<"second loop"<<endl;
        if(slot[k]==0){
                result[k]=i;
                slot[k]=1;
                ans++;
                break;
        }
    }
   }


   for(int l=0;l<ans;l++){
    printf("%c\n",j[result[l]].jobid);
   }



}



int main()
{

    job j[]= { {'a', 2, 100}, {'b', 1, 19}, {'c', 2, 27},
        {'d', 1, 25}, {'e', 3, 15}
    };
    int n= 5;
    printmaxprofitsequence(j,n);





}

