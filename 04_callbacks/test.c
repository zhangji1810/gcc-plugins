int fib(int n)
{
    if (n > 1)
        return fib(n-1) + fib(n-2);
    else
        return 1;
}
