#include <stdio.h>
int main()
{
    int choice;
    float a,b;
    printf("1. Addition");
    printf("2. Subtraction");
    printf("3. Multiplication");
    printf("4. Division");
    printf("Enter your choice");
    scanf("%d",&choice);
    printf("Enter two numbers");
    scanf("%f%f",&a,&b);
    switch (choice)
    {
    case 1:
    printf("Result = %.2f\n",a+b);
    break;
    case 2:
    printf("Result = %.2f\n",a-b);
    break;
    case 3:
    printf("Result = %.2f\n",a*b);
    break;
    case 4:
    if(b !=0)
    printf("Result = %.2f\n",a/b);
    else printf("Division by zero is not possible\n");
    break;
    default:
    printf("Invalid option\n");
    }
    return 0;
}
