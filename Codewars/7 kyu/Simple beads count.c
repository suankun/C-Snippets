// https://www.codewars.com/kata/58712dfa5c538b6fc7000569/train/c
unsigned int countRedBeads (int n)
{
  return n<2 ? 0 : n*2-2;
}
//
unsigned int countRedBeads(int n) {
  if(n<=1) return 0;
  return 2*(n-1);
}
