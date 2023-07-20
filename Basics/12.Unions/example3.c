#include <stdio.h>
#include <stdlib.h>


// union Student {
//     int ID;
//     double average;
// };


// int main() {
//     union Student student1;
//     union Student *ptrStudent2;
//     printf("Size of student1 union = %d\n", sizeof(student1));
//     printf("Size of *ptrStudent2 union = %d\n", sizeof(ptrStudent2));

//     student1.ID = 5;
//     printf("student1.ID = %d\n", student1.ID);

//     ptrStudent2 = &student1;
//     ptrStudent2->ID = 10;
//     printf("student1.ID = %d\n", student1.ID);

//     return 0;
// }

typedef union Student {
    int ID;
    double average;
} student;

int main() {
    int i;
    student studentsArray[3];
    for (i=0; i<3; i++) {
        printf("Enter ID #%d: ", i+1);
        scanf("%d", &studentsArray[i].ID);
    }

    for (i=0; i<3; i++) {
        printf("Student #%d ID = %d\n", i+1, studentsArray[i].ID);
    }



    return 0;
}
