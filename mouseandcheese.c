#include<stdio.h>

void push(int a,int b)
{
    
}

int main(int argc, char const *argv[])
{
    int a[4][4],j,i;
    int stack[20][20];
    int ii,jj;

    printf("\nEnter the maze => ");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    if(a[0][0] == 0)
    {
        printf("\n0 => No Route");
        return 0;
    }else
    {
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                if(a[i][j] == 9)
                {
                    printf("\n%d %d\n",i,j);
                }
            }
        }
    }

    return 0;
}
