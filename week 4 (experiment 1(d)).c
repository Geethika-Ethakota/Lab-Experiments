#include <stdio.h>
int main()
{
    int i=5, j;
    j=i++;
    printf("After i++: j=%d, i=%d\n",j,i);
    j=++i;
    printf("After ++i: j=%d, i=%d\n",j,i);
    return 0;
}
