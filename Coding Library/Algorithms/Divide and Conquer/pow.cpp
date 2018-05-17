long long int power(int x, int y)
{
    long long int temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2, d);
    if (y%2 == 0)
        return temp*temp;
    else
        return x*temp*temp;
} 
