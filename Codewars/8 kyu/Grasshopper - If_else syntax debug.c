// https://www.codewars.com/kata/57089707fe2d01529f00024a/train/c
#include <stdbool.h>

bool checkAlive(int health){
  if (health <= 0) {
    return false;
  }
  return true;
}
//
#include <stdbool.h>

bool checkAlive(int health){
  return health > 0;
}