// https://www.codewars.com/kata/56530b444e831334c0000020/train/c
const char *chromosomeCheck(const char chromosomes[2 + 1])
{
    return strcmp(chromosomes, "XX") == 0 ? "Congratulations! You're going to have a daughter." : "Congratulations! You're going to have a son.";
}
//
const char *chromosomeCheck(const char chromosomes[2 + 1]){
  return chromosomes[0] == chromosomes[1] 
    ? "Congratulations! You're going to have a daughter."  
    : "Congratulations! You're going to have a son.";
}
