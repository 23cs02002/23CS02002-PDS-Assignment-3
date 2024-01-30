#include <stdio.h>

int main(){
    int a;
    printf ("Enter an integer:\n");
    scanf ("%d",&a);

    if (a>0) printf("The entered integer is positive.");
    else if (a<0) printf ("The entered integer is negative.");
    else printf ("The entered integer = 0.");

    return 0;
}