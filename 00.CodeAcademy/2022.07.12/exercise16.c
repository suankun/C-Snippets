#include <stdio.h>
#include <stdlib.h>

static const char *FORMAT_PERSON_IN = "(%[^,], %d, %c)\n";
static const char *FORMAT_PERSON_OUT = "(%s, %d, %c)\n";
typedef struct Person{
	char name[20];
	int age;
	char gender;
}t_person;

int main(void){
	t_person m ={
    	.name = "Michael",
    	.age = 37,
    	.gender = 'M'
	};
	t_person dm;

 	FILE *fp;
	fp = fopen("people.dat", "w+" );
	if(NULL == fp)
    	return 1;
	fprintf(fp, FORMAT_PERSON_OUT, m.name, m.age, m.gender);
	fseek(fp, 0, SEEK_SET);
	fscanf(fp, FORMAT_PERSON_IN, dm.name, &dm.age, &dm.gender);
	printf(FORMAT_PERSON_OUT, dm.name, dm.age, dm.gender);
	fclose(fp);
}

