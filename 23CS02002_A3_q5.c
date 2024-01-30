#include <stdio.h>

int main(){
    int num_days;
    printf ("Enter the number of days.\n");
    scanf ("%d",&num_days);

    if (num_days<=5) printf ("Fine = 1 rupee");
    else if (6<=num_days && num_days<=10) printf ("Fine = 2 rupees");
    else if (10<=num_days && num_days<=30) printf ("Fine = 5 rupees");

    else printf("Your membership is cancelled.");    

    return 0;
}