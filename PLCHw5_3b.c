#include <stdio.h>

int foo(void) {
  int arr[50][100]; 
  int i, j; 
  for (i = 0; i < 50; i++) 
  { 
    arr[i] = *(arr + i)); 
      
    for (j = 0; j < 100; j++) 
      arr[i][j] *(*(arr + i) + j); 
  } 
  return 0;
}