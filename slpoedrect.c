#include<stdio.h>  
int main() 

{  	
    int i,j,d,n;

    printf("Enter a Num : ");
    scanf("%d",&n);
    int x=n-1;
    
    for(i=1;i<=n;i++){
        for(d=1;d<=x;d++){
            printf(" ");
        }x--;
        for(int r=1;r<=n;r++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}