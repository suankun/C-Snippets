// https://www.codewars.com/kata/586f6741c66d18c22800010a/train/c
unsigned sequence_sum(unsigned start, unsigned end, unsigned step)
{
  unsigned sum = 0;
  
  for (unsigned num = start; num <= end; num += step) {
    sum += num;
  }
  return sum;
}
//
unsigned sequence_sum(unsigned start, unsigned end, unsigned step)
{
    unsigned sum = 0;
    while (start <= end) {
        sum += start;
        start += step;
    }
    return sum;
}
