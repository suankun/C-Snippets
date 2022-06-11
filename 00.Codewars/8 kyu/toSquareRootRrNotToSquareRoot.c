int* squareOrSquareRoot(int* array, int length)
{
  int i = 0;
  for (i = 0; i < length; i++)
  {
    float z = sqrt(array[i]);
    if (z == (int)z)  
    {
      array[i] = sqrt(array[i]);
    }
    else
    {
      array[i] = array[i] * array[i];
    }
  }
  
  return array;
}
