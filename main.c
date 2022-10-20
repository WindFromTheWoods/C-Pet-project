#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 20
/* Обьявляем структуру студентов */
typedef struct student{
    int id;
    char *name;
    int age;
    int course;
} student;
/* Obyavlyaem funcii */
void add(student** pStudent);
void check(student** pStudent);
void delete(student** pStudent, int id);
void edit(student** pStudent, int id);
void free(student** pStudent);



int main() {
    /* обьявляем переменные и указатель на структуру */
    student *pStudent = NULL;
    char buffer[128];
    unsigned i;
    /* delaem massiv iz structuri studentov */
    struct student students[] = {};
    /* videlenie pamyati dlya massiva structur */
    pStudent = (student*) malloc(MAX_SIZE * sizeof(student));
    /* obyavlenie peremennoi operacii */
    int operation;
    printf("                 |-----|---------------------------------------|\n");
    printf("                 |  1  |Add student                            |\n");
    printf("                 |-----|---------------------------------------|\n");
    printf("                 |  2  |Check students                         |\n");
    printf("                 |-----|---------------------------------------|\n");
    printf("                 |  3  |Delete student                         |\n");
    printf("                 |-----|---------------------------------------|\n");
    printf("                 |  4  |Edit student                           |\n");
    printf("                 |-----|---------------------------------------|\n");
    printf("                 |  9  |Exit                                   |\n");
    printf("                 |-----|---------------------------------------|\n");

    /* opredelenie operacii */
    scanf ("%d", &operation);
    switch (operation)
    {
        case '1':
            break;
        case '2':
            break;
        case '3':
            break;
        case '4':
            break;
        case '9':
            return 0;
        default:
            printf("Error! Wrong operation!");
    }
    return 0;
}
void add(int a) {

};
