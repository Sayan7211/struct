//**Roll Number,Name,Depertment,Course**//
#include <stdio.h>
    int i,n;
struct student {
    char name[50];
    char depertment[50];
    char course[50];
    int roll;
    
};

int main() {
    struct student s[50];
    printf("Enter The Number For Student's: ");
    scanf("%d",&n);
    printf("Enter information:\n");
    for(i=0;i<n;i++)
    {
    printf("Enter Name: ");
    scanf("%s",&s[i].name);

    printf("Enter Roll Number: ");
    scanf("%d", &s[i].roll);
    printf("Enter Depertment: ");
    //scanf("%s", &s[i].depertment);
    //fgets(s[i].depertment, sizeof(s[i].depertment),stdin);
    scanf("%s",&s[i].depertment);
    printf("Enter Course: ");
    scanf("%s",&s[i].course);
    //scanf("%s",&s[i].course);
    //fgets(s[i].course, sizeof(s[i].course), stdin);
    }

    //printf("Displaying Information:\n");
    //printf("Name: ");
    //printf("%s", s.name);
    //printf("Roll number: %d\n", s.roll);
    //printf("Marks: %.1f\n", s.marks);

    return 0;
}


