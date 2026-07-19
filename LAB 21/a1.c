#include<stdio.h>
#include<string.h>
struct employee{
    int id;
    char name[100];
    char designation[100];
    float salary;
};
void main(){
    struct employee employees[3]={
       {1,"John Doe","Engineer",50000.0}
       ,{2,"Daisy Shah","Doctor",80000.0}
       ,{3,"Spencer Smith","Pilot",60000.0}
       
    };
    for(int i=0;i<3;i++)
    {
        printf("Details of Employees %d\n",i+1);
        printf("Id : %d\n",employees[i].id);
        printf("Name : %s\n",employees[i].name);
        printf("Designation : %s\n",employees[i].designation);
        printf("Salary : %f\n",employees[i].salary);
    }
}