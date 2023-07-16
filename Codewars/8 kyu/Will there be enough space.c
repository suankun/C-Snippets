// https://www.codewars.com/kata/5875b200d520904a04000003/train/c
int enough(int cap, int on, int wait)
{
//   if (on + wait <= cap) return 0;
//   else return (on + wait) - cap;
  return on + wait <= cap ? 0 : (on + wait) - cap;
}
