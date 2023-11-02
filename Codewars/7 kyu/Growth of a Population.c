// https://www.codewars.com/kata/563b662a59afc2b5120000c6/train/c
int nbYear(int p0, double percent, int aug, int p) {
  int needed_years = 0;
  double percentage = percent/100;
  while(p0<p) {
    p0 += (double)p0*percentage+aug;
    needed_years++;
  }
  return needed_years;
}
//
int nbYear(int p0, double percent, int aug, int p) {
    int counter = 0;
    percent /= 100;
    while (p0 < p){
      p0 += p0 * percent + aug;
      counter++;
    }
    
    return counter;
}
