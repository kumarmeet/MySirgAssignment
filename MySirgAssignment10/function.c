int decimal_to_binary(int n)
{
    if(n == 0)
        return 0;
    else
        return (n % 2 + 10 * decimal_to_binary(n / 2));
}

int sum_of_digits(int n)
{
  int sum = 0;

  if(n == 1)
    return 1;

  sum = n % 10 + sum_of_digits(n / 10);
  return sum;
}

int sum_of_square_natural_number(int n)
{
    int sum = 0;

    if(n == 0)
        return 0;

    sum = n * n + sum_of_square_natural_number(n - 1);
    return sum;
}

int sum_n_odd_natural_number(int n)
{
    int sum = 0;

    if(n % 2 == 0)
        n = n - 1;

    if(n < 0)
        return 0;

    sum = n + sum_n_odd_natural_number(n - 2);
    return sum;
}

int sum_n_even_natural_number(int n)
{
    int sum = 0;

    if(n % 2 == 1)
        n = n - 1;

    if(n < 0)
        return 0;

    sum = n + sum_n_even_natural_number(n - 2);
    return sum;
}

int sum_n_natural_number(int n)
{
    int sum = 0;

    if(n == 1)
        return 1;

    sum = n + sum_n_natural_number(n - 1);
    return sum;
}

int reverse_odd_recursion(int n)
{
    if(n % 2 == 0)
        n = n - 1;

    if(n <= 0)
        return 0;

    printf("%d\t", n);
    reverse_odd_recursion(n - 2);
}

int odd_recursion(int n)
{
    if(n % 2 == 0)
        n = n - 1;

    if(n <= 0)
        return 0;

    odd_recursion(n - 2);
    printf("%d\t", n);
}

int reverse_even_recursion(int n)
{
    if(n % 2 == 1)
        n = n - 1;

    if(n <= 0)
        return 0;

    printf("%d\t", n);
    even_recursion(n - 2);
}

int even_recursion(int n)
{
    if(n % 2 == 1)
        n = n - 1;

    if(n <= 0)
        return 0;

    even_recursion(n - 2);
    printf("%d\t", n);
}

void first_n_reverse_recursion(int n)
{
  if(n > 0)
  {
    printf("%d\n",n);
    first_n_reverse_recursion(n-1);
  }
}

void first_n_recursion(int n)
{
  if(n > 0)
  {
    first_n_recursion(n-1);
    printf("%d\n",n);
  }
}
