#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
  int k, l;
  for (k = n - 2; k >= 0; k --) {
    if(strcmp(s[k], s[k+1]) < 0) break;
  }
  if (k < 0) return 0;

  for (l = n -1; l > k; l --) {
    if(strcmp(s[k], s[l]) < 0) break;
  }

  char * tmp = s[k];
  s[k] = s[l];
  s[l] = tmp;

  for(int i = k + 1, j = n -1; i < j; i ++, j --) {
    tmp = s[i];
    s[i] = s[j];
    s[j] = tmp;
  }
  return 1;
}

// Code credit :- Akshat Jain  
//HackerRank Link :- https://www.hackerrank.com/akshat_jjain?hr_r=1
