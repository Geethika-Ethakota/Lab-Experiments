#include <stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float avg;
    printf("Enter marks in five subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    avg=total/5.0;
    printf("Total Marks=%d\n",total);
    printf("Average Marks=%.2f\n",avg);
    return 0;
}
