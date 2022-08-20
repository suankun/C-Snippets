/* (11)
Създайте структура fraction (аритметична дроб) с член данни int n(nominator=числител) и int d (denominator=знаменател)
С помощта на typedef struct създайте нов тип FRACTION и указател към него *FPTR.
Дефинирайте функциите:
FRACTION create(int numerator, int denominator);-създаване на дроб по дадени стойности на числител и знаменател
FRACTION input(void);-създаване на дроб по стойности въведени от клавиатурата
void print(FPTR); - отпечатване на дроб
int gcd(int first_dividend, int second_dividend); - НОД
FRACTION add(FPTR, FPTR); -събиране на две дроби
FRACTION mult(FPTR, FPTR);-умножение на две дроби
FRACTION divide(FPTR, FPTR);-деление на две дроби
FRACTION subtract(FPTR, FPTR);-изваждане на две дроби
*/

#include <stdio.h>
typedef struct fraction FRACTION;
typedef FRACTION * FPTR;

// Structures:
struct fraction{
    int numerator;
    int denominator;
};

// Functions:
FRACTION create(int numerator, int denominator)                     //създаване на дроб по дадени стойности на числител и знаменател
{
    if(denominator == 0)
    {
        printf("Can't divide by 0, denominator set to 1.\n");
        denominator = 1;
    }   
    FRACTION new_fraction;
    new_fraction.numerator = numerator;
    new_fraction.denominator = denominator;
    return new_fraction;
}

FRACTION fraction_user_input()                                      //създаване на дроб по стойности въведени от клавиатурата
{
    int n, d;
    printf("Enter numerator: ");
    scanf("%d", &n);
    printf("Enter denominator: ");
    scanf("%d", &d);
    while(d == 0)
    {
        printf("Cannot divide by 0.\nEnter denominator, that is different than 0: ");
        scanf("%d", &d);
    }
    return create(n, d);
}

void print(FPTR fraction)                                           //отпечатване на дроб
{   
    if (fraction->numerator == 0)
    {
        printf("0");
    } 
    else if (fraction->numerator == fraction->denominator)
    {
        printf("1");
    }
    else
    {
        printf("%d/%d", fraction->numerator, fraction->denominator);
    }
}

FRACTION max(FPTR a, FPTR b)
{
    int a_multiplied = a->numerator * b->denominator;
    int b_multiplied = b->numerator * a->denominator;
    
    return a_multiplied > b_multiplied ? *a : *b;
}

FRACTION min(FPTR a, FPTR b)
{
    int a_multiplied = a->numerator * b->denominator;
    int b_multiplied = b->numerator * a->denominator;
    
    return a_multiplied < b_multiplied ? *a : *b;
}

int gcd(int first_dividend, int second_dividend)                    //НОД
{ 
    if (first_dividend == 0) return 1;
    while (second_dividend != 0)  
    {  
        if (first_dividend > second_dividend)
        {  
            first_dividend = first_dividend - second_dividend;  
        }  
        else  
        {  
            second_dividend = second_dividend - first_dividend;  
        }  
    }  
    return first_dividend;
}

FRACTION simplify(FRACTION a)
{
    FRACTION simplified_fraction;

    int gcd_of_a = gcd(a.numerator, a.denominator);
    simplified_fraction.numerator = a.numerator / gcd_of_a;
    simplified_fraction.denominator = a.denominator / gcd_of_a;

    return simplified_fraction;
}

FRACTION add(FPTR a, FPTR b)                                        //събиране на две дроби
{
    FRACTION new_frac_add;
 
    int a_common = a->numerator * b->denominator;
    int b_common = b->numerator * a->denominator;
 
    new_frac_add.numerator = a_common + b_common;
    new_frac_add.denominator = a->denominator * b->denominator;
 
    new_frac_add = simplify(new_frac_add);
 
    return new_frac_add;
}

FRACTION multiply(FPTR a, FPTR b)                                   //умножение на две дроби
{
    FRACTION new_frac_multiply;
    new_frac_multiply.numerator = a->numerator * b->numerator;
    new_frac_multiply.denominator = a->denominator * b->denominator;

    new_frac_multiply = simplify(new_frac_multiply);

    return new_frac_multiply;
}

FRACTION divide(FPTR a, FPTR b)                                     //деление на две дроби
{
    FRACTION b_backwards;
    b_backwards.numerator = b->denominator;
    b_backwards.denominator = b->numerator;
 
    return multiply(a, &b_backwards);
}

FRACTION subtract(FPTR a, FPTR b)                                   //изваждане на две дроби
{
    FRACTION b_negative = *b;
    b_negative.numerator *= -1;

    return add(a, &b_negative);
}

int main()
{
    FRACTION my_fraction_a = fraction_user_input();
    FPTR my_a_ptr = &my_fraction_a;
    
    FRACTION my_fraction_b = fraction_user_input();
    FPTR my_b_ptr = &my_fraction_b;
    
    FRACTION a_plus_b = add(my_a_ptr, my_b_ptr);
    FPTR a_plus_b_ptr = &a_plus_b;

    FRACTION a_minus_b = subtract(my_a_ptr, my_b_ptr);
    FPTR a_minus_b_ptr = &a_minus_b;

    FRACTION a_times_b = multiply(my_a_ptr, my_b_ptr);
    FPTR a_times_b_ptr = &a_times_b;

    FRACTION a_div_by_b = divide(my_a_ptr, my_b_ptr);
    FPTR a_div_by_b_ptr = &a_div_by_b;
    
    printf("\n");
    printf("a = ");     print(my_a_ptr);        printf("\n");
    printf("b = ");     print(my_b_ptr);        printf("\n");
    printf("\n");
    printf("a + b = "); print(a_plus_b_ptr);    printf("\n");
    printf("a - b = "); print(a_minus_b_ptr);   printf("\n");
    printf("a * b = "); print(a_times_b_ptr);   printf("\n");
    printf("a / b = "); print(a_div_by_b_ptr);  printf("\n");

    return 0;
}