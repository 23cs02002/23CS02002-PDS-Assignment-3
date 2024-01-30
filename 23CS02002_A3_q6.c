#include <stdio.h>
#include <math.h>

int main(){
    int num, square;
    printf("Enter the number\n");
    scanf("%d",&num);

    square = num*num;
    int num_digits = floor(log10(num)) + 1;

    int power = round(pow (10,num_digits));
    int part1 = square%power;
    int part2 = square/power;

    if ((part1 + part2) == num) printf ("%d is a Kaprekar number.", num);
    else printf ("%d is not a Kaprekar number.", num);

    return 0;
}