#include<bits/stdc++.h>
using namespace std;

void printEgyptian(int nr, int dr){

    //printf("\nnew input is %d/%d \n",nr,dr);

        if(dr%nr==0){
            printf("1/%d+",dr/nr);
            return;
        }
        int n=dr/nr + 1;

        printf("1/%d +",n);

        printEgyptian(nr*n-dr,n*dr);


}



int main(){

  int nr =6,dr=14;
  printEgyptian(nr,dr);
}
