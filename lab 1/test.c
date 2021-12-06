#include <time.h>
#include <stdio.h>
int main()
{
    // double time, time1;
    // time = clock();
    // time1 = clock();
    // time = (time1-time)/CLOCKS_PER_SEC;
    // printf("%lf", time);
    // long double x;
    // x = 3;
    // printf("%lf", x);
    // int A[]={20,30,40,50,60};

    // printf("%d",A[0]);

    // clock_t a,b,c,d;
    // double time1,time2;
    // long int i,j;
    // a = clock();
    // for(i=0;i<1000;i++){
    //     for ( j = 0; j < 15000; j++)
    //     {
    //         if(i<j){
    //             int p = 1;
    //             int q =2;
    //         }

    //     }

    // }
    // b=clock();
    // time1 = (double)(b-a)/CLOCKS_PER_SEC;
    // printf("\nFor i : %li %li %lf",a,b,time1);

    // return 0;
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int A[n];
    printf("Enter elements of array: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
}