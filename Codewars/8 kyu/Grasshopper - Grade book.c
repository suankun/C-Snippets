// https://www.codewars.com/kata/55cbd4ba903825f7970000f5/train/c
char get_grade(int a, int b, int c) {
    int average=0;
    char result;;
    average = (a + b + c) / 3;
    if (average >= 90 && average <= 100)
      result = 'A';
    else if (average >= 80 && average < 90)
      result = 'B';
    else if (average >= 70 && average < 80)
      result = 'C';
    else if (average >= 60 && average < 70)
      result = 'D';
    else if (average >= 0 && average < 60)
      result = 'F';
  
    return result;
}
//
char get_grade(int a, int b, int c) {
    float avg = (a + b + c) / 3;
    if (90 <= avg) return 'A';
    if (80 <= avg) return 'B';
    if (70 <= avg) return 'C';
    if (60 <= avg) return 'D';
    return 'F';
}
