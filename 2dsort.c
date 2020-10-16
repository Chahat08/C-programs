#include <stdio.h>
int main()
{
    int arr[10], flag[10], i, j, ctr=1;

    printf("Enter ten numbers to fill the array:\n");

    for(i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
        flag[i]=1;
    }
    for(i=0; i<10; i++)
    {
        for(j=i+1; j<10; j++)
        {
            if(flag[i])
            {
                if(arr[i]==arr[j])
                {
                    ctr++;
                    flag[j]=0;
                }
            }
        }
        if(flag[i])
        {printf("%d appears %d times.\n", arr[i], ctr);}
        ctr=1;
    }
    return 0;
}


