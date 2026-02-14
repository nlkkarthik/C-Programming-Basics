#include <stdio.h>

struct stud {
    int rno;
    char sname[20];
    int m1, m2, m3;
};

int main() {
    struct stud s;
    int tot;
    float avg;

    printf("Enter the student roll number: ");
    scanf("%d", &s.rno);

    printf("Enter the student name: ");
    scanf("%s", s.sname);

    printf("Enter the three subject marks: ");
    scanf("%d %d %d", &s.m1, &s.m2, &s.m3);

    tot = s.m1 + s.m2 + s.m3;
    avg = tot / 3.0;

    printf("\nRoll Number   : %d\n", s.rno);
    printf("Student Name  : %s\n", s.sname);
    printf("Total Marks   : %d\n", tot);
    printf("Average Marks : %.2f\n", avg);

    return 0;
}
