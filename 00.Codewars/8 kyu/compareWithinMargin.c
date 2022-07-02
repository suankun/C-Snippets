int close_compare(int a, int b, int margin)
{
  if (a+margin >= b && a-margin <= b)
    return 0;
  else if (a+margin > b)
    return 1;
  else
    return -1;
}

Alternative solution:
int close_compare(int a, int b, int margin) {
  if (abs(a - b) <= margin) return 0;
  return a > b ? 1 : -1;
}
