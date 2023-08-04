// https://www.codewars.com/kata/57356c55867b9b7a60000bd7/train/c
int basic_op(char op, int value1, int value2) {
  int res;
  switch(op) {
    case '+': res = value1+value2; break;
    case '-': res = value1-value2; break;
    case '*': res = value1*value2; break;
    case '/': res = value1/value2; break;
  }
  return res;
}
//
int basic_op(char op, int x, int y) {
    return op == 43 ? x + y : op == 45 ? x - y : op == 42 ? x * y : x / y;
}
