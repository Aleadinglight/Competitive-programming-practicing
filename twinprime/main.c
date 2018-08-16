#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int sieve[10000001];


int SieveOfAtkin(int limit)
{

    int x,y;
    for ( x = 1; x < sqrt(limit); x++)
    {
        for ( y = 1; y < sqrt(limit); y++)
        {
            if ( x*x+y*y>limit )
                break;
            int n = (4*x*x)+(y*y);
            if (n <= limit && (n % 12 == 1 || n % 12 == 5))
                sieve[n] = 1-sieve[n];

            n = (3*x*x)+(y*y);
            if (n <= limit && n % 12 == 7)
                sieve[n] = 1-sieve[n];

            n = (3*x*x)-(y*y);
            if (x > y && n <= limit && n % 12 == 11)
                sieve[n]= 1-sieve[n];
        }
    }

    // Mark all multiples of squares as non-prime
    int r,i;
    for (r = 5; r < sqrt(limit); r+=2)
    {
        if (sieve[r])
        {
            for (i = r*r; i < limit; i += r*r)
                sieve[i] = 0;
         }
    }
    sieve[1]=0;
    sieve[2]=1;
    sieve[3]=1;
    // Print primes using sieve[]

}

void weirdSieve(int MAX)
{
    int i=2,j=i*i;
    while (j<=MAX){
        sieve[j]=1;
        j+=i;
    }
    i=3,j=i*i;
    while (j<=MAX){
        sieve[j]=1;
        j+=i;
    }
    for (i=1;i<=MAX/6;i++)
        if (i*6+1<=MAX && sieve[i*6+1]==0){
            j=(i*6+1)*(i*6+1);
            while (j<=MAX){
                sieve[j]=1;
                j+=i*6+1;
            }
        }
        else if (i*6-1<=MAX && sieve[i*6-1]==0){
            j=(i*6-1)*(i*6-1);
            while (j<=MAX){
                sieve[j]=1;
                j+=i*6-1;
            }
        }
}

int main()
{
    FILE *f;

    int i,MAX=1e7+1,d=0;

    //SieveOfAtkin(MAX);
    weirdSieve(MAX);

    f=fopen("output.out","w");

    for (i=3;i<=MAX;i+=2)
        if (sieve[i]==0 && sieve[i-2]==0){
            fprintf(f,"%i, %i,\n",i-2,i);
            d++;
        }
    printf("%i",d);
    fclose(f);
    return 0;
}
