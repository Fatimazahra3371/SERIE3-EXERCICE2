#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,k;
    float f=0.0;
    printf("donner la valeur de n \n");
    scanf("%d" ,&n);
    for(k=1;k<=n;k++)
    f=f+sqrt(1-pow(k/n,2));
    f=f/n;
    printf("la somme de f %d est %f" ,n,f);
    return 0;
}
