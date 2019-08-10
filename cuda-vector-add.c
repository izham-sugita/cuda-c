/*
The reference homepage
https://cuda-tutorial.readthedocs.io/en/latest/tutorials/tutorial01/
*/

#include<stdio.h>
#include<stdlib.h>

#define N 1000000

void vector_add(float *out, float *a, float *b, int n)
{
  for(int i=0; i<n; ++i){
    out[i] = a[i] + b[i];
  }
}

int main()
{
  float *a, *b, *out;

  //Allocate memory
  a = (float*)malloc(sizeof(float)*N);
  b = (float*)malloc(sizeof(float)*N);
  out = (float*)malloc(sizeof(float)*N);

  //Initialize
  for(int i=0; i<N; ++i){
    a[i] = 1.0f; b[i]=1.0f; out[i]=0.0f;
  }

  //call function
  vector_add(out, a,b, N);
  
}
