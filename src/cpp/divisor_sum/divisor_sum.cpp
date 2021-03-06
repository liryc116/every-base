unsigned long divisor_sum(unsigned long n)
{
    if(n<=1)
        return 0;

    unsigned long sum = 1;
    unsigned long i;

    for(i = 2; i*i<n; i++)
    {
        if(n%i==0)
            sum+= i + (n/i);
    }

    if(i*i==n)
        sum+=i;

    return sum;
}
