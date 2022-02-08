#include<stdio.h>
int main()
{
    int i,j,s;
    int arr[5];
    int store[5];
    int *p;
    int *q;
    printf("enter number\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    p=arr;
    q=store;
    for(i=0;i<5;i++)
    {  s=1;
        for(j=0;j<5;j++)
        {
            if(i!=j)
            {
             s=s**(p+j);
             *(q+i)=s;
            }

        }
    }
    for(i=0;i<5;i++)
    {
      printf("%d ",*(q+i));
    }

}
