#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    scanf("%s", &s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}

// Code credit :- Akshat Jain 
//HackerRank Link :- https://www.hackerrank.com/akshat_jjain?hr_r=1
