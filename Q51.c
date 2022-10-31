//Q51)WRITE A PROGRAM FOR SIMPLE INTEREST

//INPUT

#include <stdio.h>
int simint(int p, int t, int r);
int simint(int p, int t, int r)
{
    int si= (p*t*r)/100;
    return si;
}

int main()
{
   int p,r,t,si;
   printf("enter p,t,r:");
   scanf("%d %d %d", &p,&t,&r);
   si=simint(p,t,r);
 printf("SI:%d",si);
}


//OUTPUT

//enter p,t,r:5000,2,3
//SI:1257084
