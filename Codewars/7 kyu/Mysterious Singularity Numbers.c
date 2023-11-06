// https://www.codewars.com/kata/6409aa6df4a0b773ce29cc3d/train/c
unsigned real_numbers(unsigned n) {
  return n - (n / 2 + n / 3 + n / 5 - n / 6 - n / 10 - n / 15 + n / 30);
}
//
unsigned real_numbers(unsigned n) {
    unsigned result=n;
  
    // Remove multiples of 2, 3 & 5
    result-= n/2;
    result-= n/3;
    result-= n/5;
    
    // Add back multiples that were removed twice
    result+= n/(2*3);
    result+= n/(2*5);
    result+= n/(3*5);
  
    // Remove again the multiples that were added back 3 times in the previous step after being removed 3 times in the first step 
    result-= n/(2*3*5);
    return result;
}
