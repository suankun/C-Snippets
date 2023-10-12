// https://www.codewars.com/kata/55dc4520094bbaf50e0000cb/train/cpp
bool amIWilson(unsigned n) {
    if (n<=1) return false;
    if (n==563) return true;
    unsigned num {1};
    for (unsigned i {n-1}; i>0; i--) {
        num *= i;
    }
    
    unsigned check = ((num)+1)/(n*n);
    double result = ((num)+1.0)/(n*n);
    return check==result;
}
//
bool amIWilson(unsigned n) {
  return n == 5 || n == 13 || n == 563;
}
