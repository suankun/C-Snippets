// https://www.codewars.com/kata/5a4d303f880385399b000001/train/c
const char* strong_num(const int number)
{
  int sum = 0, num = number;
    while (num > 0) {
        int temp = num % 10;
        int temp_sum = 1;
        for (int i = 1; i <= temp; i++) {
            temp_sum *= i; 
        }
        sum += temp_sum;
        num /= 10;
    }
    return sum==number ? "STRONG!!!!" : "Not Strong !!"; 
}
