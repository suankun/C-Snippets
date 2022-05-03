#include <stddef.h>

void count_positives_sum_negatives(
  int *values, size_t count, int *positivesCount, int *negativesSum) 
{
  for (size_t i = 0; i < count; i++)
  {
    if (values[i] > 0)
      *positivesCount = *positivesCount + 1;
    else if (values[i] < 0)
      *negativesSum += values[i];
  }
}

/*Alternative solution 1:*/
void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum) {
  int cnt = 0; int sm = 0;
  for (size_t i = 0; i < count; i++) {
    if (values[i] > 0) cnt++;
    if (values[i] < 0) sm += values[i];
  }
  *positivesCount = cnt;
  *negativesSum = sm;
}

/*Alternative solution 2:*/
void count_positives_sum_negatives(int *values, size_t count, int *positivesCount, int *negativesSum){
  while(count--){
    values[count]<=0 ? (*negativesSum)+=values[count] : (*positivesCount)++;
  }

}