#include<stdio.h>
#include<time.h>
int main()
{
    int array[100000],c,d,swap;
    time_t start,end;
    double tc;
    int n= malloc(sizeof(n));
    n=1000;
    for(c=0;c<n;c++)
        {
            array[c]=c+1;
        }
    printf("%d",array[n-1]);
    start=clock();
    for(c=0;c<n-1;c++)
        {
            for(d=0;d<n-c-1;d++)
                {
                    if(array[d]>array[d+1])
                {
                swap=array[d];
                array[d]=array[d+1];
                array[d+1]=swap;
                }
                }
        }
    end=clock();
    printf("difference %d \n",end-start);
    tc=(difftime(end,start)/CLOCKS_PER_SEC);
    printf("time efficiency is %lf",tc);
}