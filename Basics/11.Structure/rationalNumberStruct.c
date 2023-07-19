#include <stdio.h>

typedef struct rational {
    int numerator;
    int denomerator;
} Rational;

void rationalIncrement(Rational *rPtr) {
    (*rPtr).numerator = (*rPtr).numerator + (*rPtr).denomerator;
}

void rationalDecrement(Rational *rPtr) {
    (*rPtr).numerator = (*rPtr).numerator - (*rPtr).denomerator;
}

Rational rationalAddition(Rational r1, Rational r2) {
    Rational result;
    result.denomerator = r1.denomerator * r2.denomerator;
    result.numerator = r1.numerator * r2.denomerator + r2.numerator * r1.denomerator;
    return result;
}

Rational rationalSubtraction(Rational r1, Rational r2) {
    Rational result;
    result.denomerator = r1.denomerator * r2.denomerator;
    result.numerator = r1.numerator * r2.denomerator - r2.numerator * r1.denomerator;
    return result;
}

Rational rationalMultiplication(Rational r1, Rational r2) {
    Rational result;
    result.denomerator = r1.denomerator * r2.denomerator;
    result.numerator = r1.numerator * r2.numerator;
    return result;
}

Rational rationalDivision(Rational r1, Rational r2) {
    Rational result;
    result.denomerator = r1.denomerator * r2.numerator;
    result.numerator = r1.numerator * r2.denomerator;
    return result;
}

int smallerRational(Rational r1, Rational r2) {  // r1<r2
    r1.denomerator = r1.denomerator * r2.denomerator;
    r2.denomerator = r1.denomerator * r2.denomerator;
    r1.numerator = r1.numerator * r2.denomerator;
    r2.numerator = r2.numerator * r1.denomerator;
    if (r1.numerator < r2.numerator) {
        return 1;
    } else {
        return 0;
    }
}

int largerRational(Rational r1, Rational r2) {  // r1>r2
    r1.denomerator = r1.denomerator * r2.denomerator;
    r2.denomerator = r1.denomerator * r2.denomerator;
    r1.numerator = r1.numerator * r2.denomerator;
    r2.numerator = r2.numerator * r1.denomerator;
    if (r1.numerator > r2.numerator) {
        return 1;
    } else {
        return 0;
    }
}

int isEqualRational(Rational r1, Rational r2) {  // r1==r2
    r1.denomerator = r1.denomerator * r2.denomerator;
    r2.denomerator = r1.denomerator * r2.denomerator;
    r1.numerator = r1.numerator * r2.denomerator;
    r2.numerator = r2.numerator * r1.denomerator;
    if (r1.numerator == r2.numerator) {
        return 1;
    } else {
        return 0;
    }
}

int isNotEqualRational(Rational r1, Rational r2) {  // r1!=r2
    r1.denomerator = r1.denomerator * r2.denomerator;
    r2.denomerator = r1.denomerator * r2.denomerator;
    r1.numerator = r1.numerator * r2.denomerator;
    r2.numerator = r2.numerator * r1.denomerator;
    if (r1.numerator != r2.numerator) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    
    return 0;
}
