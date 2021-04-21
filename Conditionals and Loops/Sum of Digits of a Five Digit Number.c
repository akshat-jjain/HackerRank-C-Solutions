#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,a,y,i;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    y=n;
    a=0;
    for(i=0;i<5;i++)
    {
        a=a+y%10;
        y=y/10;
    }
    n=a;
    printf("%d",n);
    return 0;
}

// Code credit :- Akshat Jain  
//HackerRank Link :- https://www.hackerrank.com/akshat_jjain?hr_r=1
