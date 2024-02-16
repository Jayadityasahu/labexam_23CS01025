#include<stdio.h>
int prime(int k)
      {   int s, div=0;
     for(int s=1; s<=k; s++)  if(k%s==0)  div +=1;
     if(div==2) return 1;
     else return 0;};

int main(){

    int i, j, n;
    printf("Enter number:");
    scanf("%d", &n);

    for(i=1; i<n; i++){
        for(j=1; j<n; j++){
            if(prime(i)==0 && prime(j)==0){
                if(i+j==n){
                    printf("i = %d, j = %d", i, j);
                } 
                
            }break;
        }

    } 
    return 0;
}