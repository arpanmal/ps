#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[5];
    char temp[10];
    int i,j,m=0,b=0;

    for(i=0,i<5,i++){
        gets(str);
    }
   for(i=0,i<5,i++){
    for(j=i+1,j<5,j++){
        if(str[i][m]==str[j][m]){
            while(str[i][m]!='\0'&&str[j][m]!='\0'){
                if(str[i][m]>str[j][m]){
                 while(str1[i][b]!='\0')
    {
        temp[b] = str[i][b];
        b++;
    }
    temp[b] = '\0';
    b=0;
    while(str[j][b]!='\0')
    {
        str[i][b] = str[j][b];
        b++;
    }
    str[b] = '\0';
    b=0;
    while(temp[b]!='\0')
    {
        str[j][b] = temp[b];
        b++;
                }
                m++;
            }
        }
    }
   }
   for(i=0,i<5,i++){
        printf("%d",str[i]);
   }
}
