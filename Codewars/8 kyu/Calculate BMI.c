// https://www.codewars.com/kata/57a429e253ba3381850000fb/train/c
/*    N.B. do not allocate memory,
   instead: return a string literal  */

const char *bmi (int weight, double height)
{
    return weight/(height*height) <= 18.5 ? "Underweight" :
           weight/(height*height) <= 25.0 ? "Normal" :
           weight/(height*height) <= 30.1 ? "Overweight" : "Obese";
}
