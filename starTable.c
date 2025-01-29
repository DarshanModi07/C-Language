#include<stdio.h>  
int main() 

{  	
    int i,j,n,a=1;

    printf("Enter a num : ");
    scanf("%d",&n);
    int m=n;
    for(int g=1;g<=2*n+1;g++)
    printf("*");
    printf("\n");
    int b=n;
    for(int j=1;j<=n;j++)
    {
        for(int x=1;x<=b;x++){
            printf("*");
        }b--;
        
        for(int y=1;y<=a;y++){
            printf(" ");
        }a=a+2;
    
        for(int z=1;z<=m;z++){
            printf("*");
        }m--;
        printf("\n");
    }
    return 0;
}