int round_to_10 (int n)
{
  int temp = 0;
  int isNegative = 0;
  if (n < 0)
  {
    n *= -1;
    isNegative = 1;
  }
  temp = n % 10;
  if (temp >= 5)
    n = n + (10 - temp);
  else
    n -= temp;

  if (isNegative == 1)
    return n * -1;
  else
    return n;
}

// Altenative solution:
int round_to_10 (int n)
{
  return round(n / 10.0) * 10;
}
