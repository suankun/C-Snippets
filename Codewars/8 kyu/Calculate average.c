// https://www.codewars.com/kata/57a2013acf1fa5bfc4000921/train/c
double find_average(const double array[/* length */], unsigned length)
{
  if (length == 0) return 0;
  double res = 0.0;
  double sum = 0.0;
  for (unsigned i = 0; i<length; i++) {
    sum += array[i];
  }
  res = sum/length;
	return res;
}
//
double find_average(double* array, int length) {
    double sum = 0;
    for(int i=0; i<length; i++)
        sum += *array++;
    return length > 0 ? sum/length : 0;
}
