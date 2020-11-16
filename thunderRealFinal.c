#include<stdio.h>
int main()
{
    int n,i,j,co=0,i1=0,i2=0,i3=0;
    scanf("%d",&n);
    for(i=1;i<=(n);i++)
    {
        if(i==n)
        {
            while(i1!=((2*n)))
            {printf("*");
            i1++;
            }
            i2++;
        }

        for(j=i;j<((2*n));j++)
        {
            printf(" ");
            i3++;
        }

        if(i2==0)
        {
            int i4=0;
            while((i4!=(2*n)-i3))
            {
                printf("*");
                i4++;
            }
            i3=0;
        }
        printf("\n");
    }

    for(int i7=(n-1);i7>=(1);i7--)
    {
        int i6=0;
        while(i6!=i7)
        {
            printf("*");
            i6++;
        }
        if(i7==1)
            break;
        printf("\n");
    }
}

