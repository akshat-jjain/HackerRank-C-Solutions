#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int y=0,i,f,s,t;
    f=a;
    s=b;
    t=c;
    for(i=0;i<n-3;i++)
    {
        y=f+s+t;
        f=s;
        s=t;
        t=y;
    }
    return y;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}

// Code credit :- Akshat Jain  
//HackerRank Link :- https://www.hackerrank.com/akshat_jjain?hr_r=1
