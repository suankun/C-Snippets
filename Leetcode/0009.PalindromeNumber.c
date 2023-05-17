bool isPalindrome(int x){
    if (x < 0) return false;
    int copyOfX = x;
    long reversedNum = 0, currDigit = 0;
    while (copyOfX != 0)
    {
        currDigit = copyOfX % 10;
        reversedNum = reversedNum * 10 + currDigit;
        copyOfX /= 10;
    }
    return x == reversedNum ? true : false;
}
