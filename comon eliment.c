#include<stdio.h>                                                                                                                                                                                                                                                                               #include<stdio.h>
int comon(int(*p)[5],int s,int n);
int i,j;

int main(){
    int b,l=0;
int mat[4][5];
int ret[5]={-1,'\0','\0','\0','\0',};
printf("enter numbers");
for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
           scanf("%d",&mat[i][j]);
        }
}
for(int i=0;i<1;i++){
        for(int j=0;j<5;j++){
                //printf("j=%d\n",j);

b=comon(mat,4,5);
//printf("b=%d\n",b);
if(b!=-1){
  ret[l]=b;
  l++;
  }
        }
  }
  for(i=0;ret[i]!='\0';i++){
    printf("comon eliment is %d\n ",ret[i]);
  }
}
comon(int(*p)[5],int s,int n){
//printf("j=%d\n",j);
j++;
    int t,c,b=-1;
                t=1;

            for(int k=1;k<s;k++){
                    //printf("k=%d\n",k);
                    c=1;
                for(int m=0;m<n;m++){
                   // printf("m=%d\n",m);

                      if(*(*(p+i)+j)==*(*(p+k)+m)){
                        t++;
                        c++;
                        break;
                   }
                }
                if(c==1){
                    break;
                }
            }

        //printf("t=%d\n",t);
        //printf("valu=%d\n",*(*(p+i)+j));
        if(t==4){
        b =*(*(p+i)+j);
        }

return b;
}
