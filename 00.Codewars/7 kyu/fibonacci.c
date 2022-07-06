int fib(int n)
{
     if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( fib(n-1) + fib(n-2) );
}

// Alternative solution:
int fib(int n) {
  return n<2 ? n : fib(n-2)+fib(n-1);
}
