#include <stdio.h>
#include <stdlib.h>
#include <alloc.h>
#include <process.h>

int main()
{
    int  i, N, j, *k, x, z, **graph, **weights, N_diadromis, *korufi, m, l, b, sum=0;
    int fl=0;
    printf("Dwste ton arithmo twn korufwn :\n");
    scanf("%d",&N);
    if((graph=(int **)malloc(N*sizeof(int *)))==NULL)
    {
      printf("Den uparxei diathesimi mnimi\n");
      exit(1);
    }
    for(i=0;i<N;i++)
    {
      if((graph[i]=(int *)malloc(N*sizeof(int)))==NULL)
      {
        printf("Den uparxei diathesimi mnimi\n");
        exit(1);
      }
    }
    if((weights=(int **)malloc(N*sizeof(int *)))==NULL)
    {
      printf("Den uparxei diathesimi mnimi\n");
      exit(1);
    }
    for(i=0;i<N;i++)
    {
      if((weights[i]=(int *)malloc(N*sizeof(int)))==NULL)
      {
        printf("Den uparxei diathesimi mnimi\n");
        exit(1);
      }
    }
    if((korufi=(int *)malloc(N*sizeof(int)))==NULL)
      {
        printf("Den uparxei diathesimi mnimi\n");
        exit(1);
      }
    if((k=(int *)malloc(N*sizeof(int)))==NULL)
      {
        printf("Den uparxei diathesimi mnimi\n");
        exit(1);
      }
    for(i=0;i<N;i++)
    {    
      printf("\n\nDwste ton arithmo twn korufwn pou sundeontai me tin korufi ---> %d  :\n",i);
      scanf("%d",&k[i]); 
      l=k[i];
      if (k[i]>N-1)
      {
        printf("\n\n\nDen einai efikto na einai sundedemeni me perissoteres apo %d korufes!!!\n\n\n",N-1);
        system("pause");
        exit(0);
      }            
      for(j=0;j<l;j++)
      {
        printf("\n\nDwste tin %di korufi pou sundeetai me tin korufi ---> %d  :\n",j+1,i);
        scanf("%d",&x);
        graph[i][j]=x;
        printf("\n\nDwste to varos tis korufis ---> %d me tin korufi ---> %d  :\n",i,x);
        scanf("%d",&z);
        weights[i][j]=z;
      }
    }
    printf("\n\nDwste twn arithmo twn korufwn pou epithumeite na orizoun tin diadromi :\n");
    scanf("%d",&N_diadromis);
    printf("\n\nDwste tin 1i korufi tis diadromis :\n");
    scanf("%d",&korufi[0]);
    m=korufi[0];
    b=k[m];
    for(i=1;i<N_diadromis;i++)
    {
      printf("\n\nDwste tin %di korufi tis diadromis :\n",i+1);
      scanf("%d",&korufi[i]);
      for(j=0;j<b;j++)
      {
        if(graph[m][j]==korufi[i])
        {
          sum += weights[m][j];
          fl=1;
          break;
        }
      }
      if (fl==0)
      {
        printf("\n\n\nI diadromi den einai efikti dioti \nI korufi ---> %d me tin korufi ---> %d den sundeontai!\n\n\n",m,korufi[i]);
        exit(0);
      }
    }
    printf("\n\n\nI diadromi einai EFIKTI !!!");
    printf("\n\n\nTO kostos tis einai :  %d\n\n\n",sum);
    system("pause");   
}
