int mod256WithoutMod(int number)
{
  return number % 256;
}

// Alternative solutions:
int mod256WithoutMod(int number)
{
  return (number > 0 ? number & 255 : -(-number & 255));
}

int mod256WithoutMod(int number)
{
return number - (((int)(number/256)) * 256);
}
