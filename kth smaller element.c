#include<stdio.h>
int main()
{
    int i,j,k,temp;
    int arr[5];
    int *p;
    p=arr;
    printf("enter array valus\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter Kth number");
    scanf("%d",&k);
    if(k<=5){

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
    printf("Kth: %d",arr[k-1]);
    }
    else{
    printf("k is greater than array size");
    }
}
