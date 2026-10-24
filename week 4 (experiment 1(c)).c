#include <stdio.h>
int main()
{
    int A,B,result;
    printf("Enter A and B");
    scanf("%d%d",&A,&B);
    result=A++ + B-- -A;
    printf("result=%d\n",result);
    printf("A=%d\n",A);
    printf("B=%d\n",B);
    return 0;
}
