// https://www.codewars.com/kata/5506b230a11c0aeab3000c1f/train/c
int evaporator(double content, double evap_per_day, double threshold) {
    int days = 0;
    double condition = content*(threshold/100);
    while (content>=condition) {
        content -= (content*(evap_per_day/100));
        days++;
    }
    
    return days;
}
