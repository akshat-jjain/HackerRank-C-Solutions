#include <stdio.h>
int max_of_four(int a, int b, int c, int d);

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
int max_of_four(int a, int b, int c, int d)
{
    if(a>b && a>c && a>d)
    return a;
    if(b>a && b>c && b>d)
    return b;
    if(c>a && c>b && c>d)
    return c;
    else
    return d;
}

// Code credit :- Akshat Jain 
//HackerRank Link :- https://www.hackerrank.com/akshat_jjain?hr_r=1
