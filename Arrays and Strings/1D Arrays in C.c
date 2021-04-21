#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,n,res=0,*arr;
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d", arr+i );
        res=res + *(arr+i);
    }
    printf("%d",res);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

// Code credit :- Akshat Jain  
//HackerRank Link :- https://www.hackerrank.com/akshat_jjain?hr_r=1
