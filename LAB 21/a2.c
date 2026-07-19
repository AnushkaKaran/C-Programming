#include<stdio.h>
#include<string.h>
struct Book{
    char bname[100];
    char aname[100];
    char pname[100];
    float price;
};
void main()
{
    struct Book book[3];
    int i;
    for(i=0;i<3;i++){
        printf("Enter the details of book %d\n",i+1);
        printf("Title :");
        scanf("%s",&book[i].bname);
        printf("Author Name :");
       scanf("%s",&book[i].aname);
        printf("Publication :");
        scanf("%s",&book[i].pname);
        printf("Price :");
        scanf("%f",&book[i].price);
        }
        printf("\n");
        for(i=0;i<3;i++){
        printf("Details of book %d\n",i+1);
        printf("Title : %s\n",book[i].bname);
        printf("Author name : %s\n",book[i].aname);
        printf("Publication : %s\n",book[i].pname);
        printf("Price : %f\n",book[i].price);
        printf("\n");
    }
}