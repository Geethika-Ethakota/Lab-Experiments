#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in celcius");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Fahrenheit=%.2f\n",f);
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("celsius=%.2f\n",c);
    return 0;
}
    