#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dna_strand(const char *dna)
{
    int flag = 0;
    int len = strlen(dna);
    char * newDNA = (char*) malloc((len + 1) * sizeof(char));
    int i = 0;
    for (i = 0; i < len; i++)
    {
        if (dna[i] == 'A')
            newDNA[i] = 'T';
        else if (dna[i] == 'T')
            newDNA[i] = 'A';
        else if (dna[i] == 'C')
            newDNA[i] = 'G';
        else if (dna[i] == 'G')
            newDNA[i] = 'C';
        else if (dna[i] != 'T' && dna[i] != 'A' && dna[i] != 'G' && dna[i] != 'C')
        {
            newDNA[i] = '\0';
            flag = 1;
        }
    }
    newDNA[i] = '\0';
    if (flag)
    {
        for (int j = 0; j < i; j++)
        {
          if      (newDNA[j] == 'A')
              newDNA[j] = 'T';
          else if (newDNA[j] == 'T')
              newDNA[j] = 'A';
          else if (newDNA[j] == 'C')
              newDNA[j] = 'G';
          else if (newDNA[j] == 'G')
              newDNA[j] = 'C';
        }
      return newDNA;
      newDNA[i] = '\0';
    }
    return newDNA;
}

// Alternative solution:
char *dna_strand(const char *dna)
{
    char *return_dna = calloc( strlen(dna) + 1, sizeof(char) );
    for(int i = 0; i < strlen(dna); i++){
        switch(dna[i]){
            case 'A' :  return_dna[i] = 'T'; break;
            case 'T' :  return_dna[i] = 'A'; break;
            case 'G' :  return_dna[i] = 'C'; break;
            case 'C' :  return_dna[i] = 'G'; break;
        }
    }
    return return_dna;
}

int main()
{
    const char *dna = "CATAGCTAGCTAGCTAGCTAATATAAAAGCTGCTCTAAATTTATATATATATATGCTCTCTTATGTCTATCTGTCTAAT���Ŕ�!";
    printf("%s\n", dna);
    char *new = dna_strand(dna);
    printf("%s\n", new);

    return 0;
}
