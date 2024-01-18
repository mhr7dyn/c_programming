#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
struct courseinfo {
    char code[];
    char title[];
    int unit;
    int quota;
    int enrol;
    char instructor[];
    char inprogress;

}

struct courseinfo course;

strcpy(course.code, "COMP1029C");
strcpy(course.title, "C Programming Bridging Course");
course.unit = 1;
course.quota = 40;
course.enrol = 36;
strcpy(course.instructor, "Gibson Lam");
course.inprogress = 'Y';
}
