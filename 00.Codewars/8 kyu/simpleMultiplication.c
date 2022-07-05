int simple_multiplication(int number) {
    return number % 2 == 0 ? number * 8 : number * 9;
}

// Alternative solution: 
int simple_multiplication(int a) {
    return a * (a % 2 == 0 ? 8 : 9);
}
