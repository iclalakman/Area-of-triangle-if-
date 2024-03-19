#include <stdio.h>
#include <math.h>
int main() {
    int side1,side2,side3;
    float area,s;

    printf("Enter the side of the triangle: ");
    scanf("%d %d %d",&side1,&side2,&side3);

    s=(side1+side2+side3)/2.0;
    area=sqrt(s*(s-side1)*(s-side2)*(s-side3));

    printf("Area of the triangle is %.3f",area);

    return 0;
}
