// https://www.codewars.com/kata/574b3b1599d8f897470018f6/train/c
int get_real_floor(int n)
{
    return n<=0 ? n : n<13 ? n-1 : n-2;
}
