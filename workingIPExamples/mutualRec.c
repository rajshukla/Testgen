/* $Id: recursion.c,v 1.2 2005/04/04 11:34:58 csg Exp $ */

/* Generate an example of recursive code, to see  *

 * how it can be modeled in the scope graph.      */

/* self-recursion  */

#include <stdio.h>
int fib(int i)

{

  if(i==0)

    return 1;

  if(i==1)

    return 1;

  return fib(i-1) + fib(i-2);

}



/* mutual recursion */

int anka(int);



int kalle(int i)

{

  if(i<=0)

    return 0;

  else

    return i + anka(i-1);

}



int anka(int j)

{

  if(j<=0)

    return 1;

  else

    return j + kalle(j-1);

}



int main()

{

  //int in = fib(5);
  int in2;
  scanf("%d",&in2);
  in2 = anka(in2);
  if(in2 > 15)
    printf("%d\n",in2);
  else
    printf("%d\n",-1);  
  return 0;
}

