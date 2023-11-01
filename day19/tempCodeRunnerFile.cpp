bool armst(int n)
{
    int i = count(n);
    int x = n;
    int sum = 0, rem;
    while (n)
    {
        rem = n % 10;
        sum += pow(rem, i);
    }
    if (sum == x)
    {
        return true;
    }
    else
    {
        return false;
    }
}