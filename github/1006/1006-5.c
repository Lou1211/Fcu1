#include<stdio.h>

int main(void){
    int n=0,i=0,j=0;
    scanf("%d",&n);
    while (i<n)
    {
        j=0;
        while (j<n)
        {
            printf("%s","#");
            j++;
        }
        i++;
        printf("%s","\n");
    }
    
}