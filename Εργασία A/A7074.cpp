#include <stdio.h>
int main ()
{
    int   N,j,i,end,p1,p2,p3,p4;
    float a[3],b[3],Z ;
    float sum1,sum2,sum3,sum4,Mo1,Mo2,Mo3,Mo4;
    p1=p2=p3=p4=0;
    sum1=sum2=sum3=sum4=0;
    Mo1=Mo2=Mo3=Mo4=0;
    printf("\nYparxoun 3 diastimata arithmwn\n\n\n");
    for (i=0;i<3;i++)
    {
        printf("\n\nDwste ta oria tou %dou diastimatos :\n",i+1);
        printf("\nApo --->  ");
        scanf("%f",&a[i]);
        printf("\nEws --->  ");
        scanf("%f",&b[i]);
    }
    printf("\n\n\nDwste to plithos twn tuxaiwn arithmwn :\n\n");
    scanf("%d",&N);
    for(j=1;j<=N;j++)
    {
       printf("\n\nDwste ton %do tuxaio arithmo :\n",j);
       scanf("%f",&Z);
       if((Z>=a[0]) && (Z<=b[0]))
       {
          p1++;
          sum1+=Z; 
       }
       if((Z>=a[1]) && (Z<=b[1]))
       {
          p2++;
          sum2+=Z; 
       }
       if((Z>=a[2]) && (Z<=b[2]))
       {
          p3++;
          sum3+=Z; 
       }
       if (((Z<a[0]) || (Z>b[0])) && ((Z<a[1]) || (Z>b[1])) && ((Z<a[2]) || (Z>b[2])))
       {
           p4++;
           sum4+=Z;
       }
    }    
    Mo1=sum1/p1;
    Mo2=sum2/p2;
    Mo3=sum3/p3;
    Mo4=sum4/p4;
    printf("\n\nSto 1o diastima anikoun :\n\n%d arithmoi \n\nMe Meso Oro : %f \n\n",p1,Mo1);
    printf("\n\nSto 2o diastima anikoun :\n\n%d arithmoi \n\nMe Meso Oro : %f \n\n",p2,Mo2);
    printf("\n\nSto 3o diastima anikoun :\n\n%d arithmoi \n\nMe Meso Oro : %f \n\n",p3,Mo3);
    printf("\n\nEktos twn diastimatwn autwn anikoun :\n\n%d arithmoi \n\nMe Meso Oro : %f ",p4,Mo4);
    scanf("%d",&end);
}
