#include<stdio.h>  
int main() 
{  	
    int i,j,n;
    printf("Enter a Num : ");
    scanf("%d",&n);
    char r='A';
    for(i=1;i<=2*n-1;i++){+
    printf("%c",r);
    r++;
    }
    printf("\n");
    int y,k=1,o=n-1;
    char f='A';
    for(int x=1;x<=(n-1);x++){
        f='A';
        for(y=1;y<=o;y++){
             printf("%c",f);
             f++;
        }
        o--;
        for(j=1;j<=k;j++){
            y++;
            f++;
            printf(" "); 
        }
         k+=2;

        for(int a=y;a<=2*n-1;a++){
            printf("%c",f);
            f++;
        }
        printf("\n");
    }
    return 0;
}