// https://www.codewars.com/kata/5ad0d8356165e63c140014d4/train/c
int final_grade(int exam, int projects) {
  int result = 0;
  if (exam > 90 || projects > 10)
    result = 100;
  else if (exam > 75 && projects >= 5)
    result = 90;
  else if (exam > 50 && projects >= 2)
    result = 75;
  
  return result;
}
//
int final_grade(int exam, int projects) {
    if (exam > 90 || projects > 10) return 100;
    if (exam > 75 && projects >= 5) return 90;
    if (exam > 50 && projects >= 2) return 75;
    return 0;
}
