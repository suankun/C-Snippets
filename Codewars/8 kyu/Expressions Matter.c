// https://www.codewars.com/kata/5ae62fcf252e66d44d00008e/train/c
int expression_matter(int a, int b, int c) {
    int max=0;
    if (a+b+c>max) max=a+b+c;
    if (a*b*c>max) max=a*b*c;
    if (a*b+c>max) max=a*b+c;
    if (a+b*c>max) max=a+b*c;
    if (a*(b*c)>max) max=a*(b*c);
    if ((a+b)*c>max) max=(a+b)*c;
    if (a*(b+c)>max) max=a*(b+c);
    return max;
}
//
int expression_matter(int a, int b, int c) {
    int r = a + b + c;
    if ((a + b) * c > r) r = (a + b) * c;
    if (a * (b + c) > r) r = a * (b + c);
    if (a * b * c > r) r = a * b * c;
    return r;
}
