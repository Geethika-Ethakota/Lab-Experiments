#include <stdio.h>
#include <math.h>
int main()
{
    double n;
    printf("Enter number");
    scanf("%lf",&n);
    if(n>=0)
        printf("square root=%.2lf\n",sqrt(n));
    else
        printf("Square root is not real\n");
    return 0;
}
