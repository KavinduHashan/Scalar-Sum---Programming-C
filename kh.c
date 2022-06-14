#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, sum=0;

    printf("Enter the array size : ");
    scanf("%d",&n);

    int abc[n], i;

    for(i=0; i<n; i++)
    {
        printf("Enter a Value : ");
        scanf("%d",&abc[n]);

        sum=sum+abc[n];
    }
    printf("\nScalar Sum is %d\n", sum);
}
