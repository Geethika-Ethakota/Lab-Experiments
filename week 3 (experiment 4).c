#include <stdio.h>
int main()
{
    float u,t,a,s;
    printf("Enter initial velocity");
    scanf("%f",&u);
    printf("Enter time");
    scanf("%f",&t);
    printf("Enter acceleration");
    scanf("%f",&a);
    s = u * t + 0.5 * a * t * t;
    printf("Distance=%.2f\n",s);
    return 0;
}
