#include <stdio.h>

int main()
{
      int a[20000]={0};
      int b[20000]={0};
      int res[20000]={0};
      a[0]=0;
      b[0]=1;
      int carry=0;
      int number;
      scanf("%d",&number);
      if(number==1)
      {
        printf("0");
      }
      else{
        number=number-1;
      for(int i=0;i<number;i++)
      {
          for(int j=0;j<5000;j++)
          {
            res[j]=a[j]+b[j]+carry;
            carry=0;
            int now=res[j];
            if(now>=10)
            {
              res[j]=now%10;
              carry=now/10;
            }
          }
            for(int j=(number-1);j>=0;j--)
            {
              b[j]=a[j];
              a[j]=res[j];
            }
        }
        int pass=0;
        for(int j=4999;j>=0;j--)
        {
          if(pass==1 || res[j]!=0)
          {
            printf("%d",res[j]);
            pass=1;
          }
        }
      }
}
