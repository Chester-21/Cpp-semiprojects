#include <stdio.h>
#include <alloc.h>
#include <process.h>

void find_pair()
{
     
}

void join()
{
     
}

void find_pair()
{
     
}

int main()
{
    int N;
    float *x, *y;
    printf("Dwste ton arithmo twn radiofarwn :\n");
    scanf("%d",&N);
    x=(float*)malloc(N*sizeof(float));
    if(x==NULL)
    {
      printf("Den uparxei diathesimi mnimi\n");
      exit(1);
    }
    y=(float*)malloc(N*sizeof(float));
    if(y==NULL)
    {
      printf("Den uparxei diathesimi mnimi\n");
      exit(1);
    }
    for(i=0;i<N;i++)
    {
      printf("\nDwste tis suntetagmenes tou %dou radiofarou : ( x , y )\n",i+1);
      scanf("%f%f",&x[i],&y[i]);
    }
    system("pause");
}
