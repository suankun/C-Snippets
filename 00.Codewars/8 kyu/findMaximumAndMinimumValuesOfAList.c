int min(int* array, int arrayLength)
{
  int min = array[0];
  for (int i = 1; i < arrayLength; i++)
  {
    if (min > array[i]) min = array[i];
  }
  return min;
}

int max(int* array, int arrayLength)
{
  int max = array[0];
  for (int i = 1; i < arrayLength; i++)
  {
    if (max < array[i]) max = array[i];
  }
  return max;
}
