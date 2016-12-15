#include <stdio.h>
#include <math.h>
#define ANAM 30
#define SIM  15   
int main()
{
    int i,j,s,k,z,end;
    float x[ANAM],y[ANAM],bx[SIM],by[SIM],P[ANAM] ;
    float w[ANAM],d,mo[SIM], sum_w,max=0;
    
    for (i=0;i<ANAM;i++)
    {
        printf("\nDwste tis suntetagmenes tou %dou anametadoti (x,y) :\n",i+1);
        scanf("%f%f",&x[i],&y[i]);
        printf("\nDwste tin isxu tou %dou anametadoti :\n",i+1);
        scanf("%f",&P[i]);
    }
    for (j=0;j<SIM;j++)
    {
        printf("\nDwste tis suntetagmenes tou %dou simeiou (x,y) :\n",j+1);
        scanf("%f%f",&bx[j],&by[j]);
    }
    
    for (k=0;k<SIM;k++)
    {
        sum_w=0;
        for(z=0;z<ANAM;z++)
        {
            d=sqrt(pow((x[z]-bx[k]),2)+pow((y[z]-by[k]),2));
            w[z]=P[z]/d;
            sum_w+=w[z];
        }
        mo[k]=sum_w/ANAM;
        if(mo[k]>max)
        {
           max=mo[k];
           s=k;
        }
    } 
    printf("\n\nTo katallilotero simeio gia tin egkatastasi einai to %do \n\nMe suntetagmenes : (%f , %f)",s+1,bx[s],by[s]);      
    scanf("%d",&end);
}

