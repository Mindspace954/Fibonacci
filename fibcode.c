#include <stdio.h>

int main()
{
      int a[50000]={0};
      int b[50000]={0};
      int ans[50000]={0};
      a[0]=0;
      b[0]=1;
      int car=0;
      int num;
      scanf("%d",&num);
      if(num==1)
      {
        printf("0\n");
      }
      else{
        num=num-1;
      for(int i=0;i<num;i++)
      {
          for(int j=0;j<49999;j++)
          {
            ans[j]=a[j]+b[j]+car;
            car=0;
            int current=ans[j];
            if(current>=10)
            {
              ans[j]=current%10;
              car=current/10;
            }
          }
            for(int j=(num-1);j>=0;j--)
            {
              b[j]=a[j];
              a[j]=ans[j];
            }
        }
        int success=0;
        for(int j=49999;j>=0;j--)
        {
          if(success==1 || ans[j]!=0)
          {
            printf("%d",ans[j]);
            success=1;
          }
        }
      printf("\n");}
}
