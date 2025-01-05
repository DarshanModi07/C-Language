#include<stdio.h>  
int main() 

{  	
    int i,j,d,n;

    printf("Enter a num of row : ");
    scanf("%d",&n);

    int nsp=0,nst=n;

    for(i=1;i<=n;i++){
        if(nsp>=1){
        for(int x=1;x<=nsp;x++){
            printf(" ");
        }}nsp++;
        for(int y=1;y<=nst;y++){
            printf("*");
        }nst--;
        printf("\n");
    }

    return 0;
}