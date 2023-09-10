// https://www.codewars.com/kata/53da3dbb4a5168369a0000fe/train/c
const char* even_or_odd(int number)
{
	return number%2==0?"Even":"Odd";
}
//
const char * even_or_odd(int n)
{
  return (n & 1)?("Odd"):("Even");
}
