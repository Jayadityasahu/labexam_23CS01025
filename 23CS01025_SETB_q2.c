#include<stdio.h>

int isperfectnumber(int m){
    int prime(int k)
      {   int s, div=0;
     for(int s=1; s<=k; s++)  if(k%s==0)  div +=1;
     if(div==2) return 1;
     else return 0;}

    int i=1, j, sum=1;
    for(i; i<m; i++){
        if(prime(i)==1){
                if(m%i==0){
                    
                    sum = sum + i ;
                }}
            }
    
        
        
     

     if(sum==m){
       
        printf("\nThe number m = %d is a perfect number", m);
     }else{printf("\nThe number m = %d is not a perfect number.", m);}
};

int prime(int k)
      {   int s, div=0;
     for(int s=1; s<=k; s++)  if(k%s==0)  div +=1;
     if(div==2) return 1;
     else return 0;}
int main(){

    int lowerlimit, upperlimit, i;
    printf("Enter  lower limit:");
    scanf("%d", &lowerlimit);
    printf("Enter upper limit:");
    scanf("%d", &upperlimit);

    for(i=lowerlimit; i<=upperlimit; i++){
     isperfectnumber(i);
     
     
     }

    
return 0;
}
