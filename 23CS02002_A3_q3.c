#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter three integers:\n");
    scanf ("%d %d %d",&a,&b,&c);

    if (a+b>c && b+c>a && c+a>b) printf ("The triangle is possible.");
    else printf("The triangle is not possible.");
    return 0;
}