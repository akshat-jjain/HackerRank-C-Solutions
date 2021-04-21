#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int a, b, c;
  a = b = c = 0;
  for(int i = 1; i < n; i ++) {
      for(int j = i+1; j <= n; j ++) {
        a = (i & j) > a && (i & j) < k ? i & j : a;
        b = (i | j) > b && (i | j) < k ? i | j : b;
        c = (i ^ j) > c && (i ^ j) < k ? i ^ j : c; 
      }
  }
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

// Code credit :- Akshat Jain  
//HackerRank Link :- https://www.hackerrank.com/akshat_jjain?hr_r=1
