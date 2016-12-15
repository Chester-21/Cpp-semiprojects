#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <alloc.h>

void calk(float minp, int i, int n, float *x, float *y, float *p, float *mo)
{
    int k;
    float d, w=0, sum=0;
    for(k=0;k<n-1;k++)
    {
      if(k==i)
      {
        break;
      }
      else
      {
        d=sqrt(pow((x[k]-x[i]),2)+pow((y[k]-y[i]),2));
        w=p[k]/(d*d); 
        if(w<minp)
        {  
          printf("\n\n\nDustuxws i isxus simatos einai mikroteri \nApo autes pou orizoun oi prodiagrafes!\n\n\n",i);
          system("pause");
          exit(0);
        }
        sum+=w;        
      }
    }
    *mo=sum/(n-1);
}

int main()
{
    int n, i, k, z ;
    float minp, *x, *y, *p, mo, mesos_oros;
    printf("Dwste ton arithmo twn pulwnwn :\n");
    scanf("%d",&n);
    printf("Dwste tin elaxisti timi tis isxus simatos tou stathmou :\n");
    scanf("%f",&minp);
    x=(float*)malloc(n*sizeof(float));
    if(x==NULL)
    {
      printf("Den uparxei diathesimi mnimi\n");
      exit(1);
    }
    y=(float*)malloc(n*sizeof(float));
    if(y==NULL)
    {
      printf("Den uparxei diathesimi mnimi\n");
      exit(1);
    }
    p=(float*)malloc(n*sizeof(float));
    if(p==NULL)
    {
      printf("Den uparxei diathesimi mnimi\n");
      exit(1);
    }
    for(i=0;i<n;i++)
    {
      printf("\nDwste tis suntetagmenes tou %dou pulwna : ( x , y )\n",i+1);
      scanf("%f%f",&x[i],&y[i]);
      printf("\nDwste tin isxu pou ekpempei o %dos pulwnas :\n",i+1);
      scanf("%f",&p[i]);
    }
    mesos_oros=0;
    for(i=0;i<n;i++)
    {
      calk(minp,i,n,x,y,p,&mo);
      if(mo>mesos_oros)
      {
        mesos_oros=mo;
        z=i;
      }
    }
    printf("O katalliloteros pulwnas einai o : ---> %d <---\n\n",z);
    printf("Me mesi timi isxuos simatos : ---> %f <---\n\n\n\n",mesos_oros);
    system("pause");
}
