#include <stdio.h>
#define NEU 10

int main()
{
    int state[NEU], n, i, j, max, z, end, fl;
    float sinapsi[NEU][NEU],sum,b;
    printf("Dwste ton arithmo twn neurwnwn :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("\n\nDwste tin katastasi tou %dou neurwna (1 i' -1) :\n",i+1);
       scanf("%d",&state[i]);
       for(j=0;j<n;j++)
       {
          if (i==j)
             sinapsi[i][j]=0;
          else
          {
             printf("\nDwste to varos tis sunapsis tou %dou neurwna me ton %do neurwna :\n",i+1,j+1);
             scanf("%f",&sinapsi[i][j]);
           }
       }
    }
    printf("\n\nDwste enan megisto arithmo epanalipsewn :\n");
    scanf("%d",&max);
    for(z=0;z<max;z++)
    {
       for(i=0;i<n;i++)
       {
          sum=0;
          for(j=0;j<n;j++)
          {
             b=sinapsi[i][j]*state[j];
             sum+=b;
          }
          if(sum<0)
          {
	        state[i]=-state[i];
          }
       }
       if(fl)break;
     }
     if(fl)
     {
        printf("\n\n\nStable state !!!\n\n\n");
        for(i=0;i<n;i++)
        printf("\nKatastasi %dou neurwna : %d \n",i+1,state[i]);
     }
     else
     {
        printf("\nKatastasi meta apo %d epanalipseis :\n",max);
        for(i=0;i<n;i++)
           printf("\nKatastasi %dou neurwna : %d \n",i+1,state[i]);
     }
     scanf("%d",&end);
}
