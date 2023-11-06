// https://www.codewars.com/kata/62c93765cef6f10030dfa92b/train/c
int Cats(int start, int finish)
{
    int res = 0;
    if (start==finish) return 0;
    while (start<finish)
    {
//         (start+3 > finish) ? start+=1 : start+=3;
        int term = start+3;
        if (term > finish) start+=1;
        else start+=3;
        res++;
    }
    
    return res;
}
//
int Cats(int start, int finish)
{
  return (finish - start) % 3 + (finish - start) / 3;
}
