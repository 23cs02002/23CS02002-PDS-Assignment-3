#include <stdio.h>

int main(){
    float x1,x2,x3,y1,y2,y3;
    printf("Enter the coordintes of three points:\n");
    scanf ("%f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3);

    if ((y2-y1)/(x2-x1)==(y3-y2)/(x3-x2)) printf ("These points lie on one straight line. ");
    else printf("These points do not lie on one straight line.");
    return 0;
}