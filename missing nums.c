#include<stdio.h>
int main()
{
    int i,j,temp;
    int arr[5];
    int *p;
    p=arr;
    printf("enter array valus\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
          if(*(p+i)>*(p+j))

          {
             //printf("j=%d\n",j);
             temp=*(p+i);
             *(p+i)=*(p+j);
             *(p+j)=temp;
          }
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
          if(*(p+i)+1!=*(p+j))
          {
              temp=*(p+i)+1;
          }
        }
    }
    printf("missing num is %d",temp);
}
