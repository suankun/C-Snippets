const char * even_or_odd(int number)
{
  if (number % 2 == 0)
    return "Even";
  return "Odd";
}

// Alternative solution 1:
const char * even_or_odd(int n)
{
  return (n & 1)?("Odd"):("Even");
}

// Alternative solution 2:
const char * even_or_odd(int n) {
  if (n % 2 == 0) return "Even";
  else return "Odd";
}

// Alternative solution 3:
const char * even_or_odd(int number)
{
  return number % 2 == 0 ? "Even" : "Odd";
}
