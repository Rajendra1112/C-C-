#include <stdio.h>
struct booklist
{
    char book_title[20];
    char book_author[20];
    int cost;
};
void display(struct booklist b1[]);
int main()
{
    struct booklist b[6];
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("enter book title:");
        scanf("%s", &b[i].book_title);
        printf("enter book author:");
        scanf("%s", &b[i].book_author);
        printf("enter the cost of book%d:", i);
        scanf("%d", &b[i].cost);
    }
    display(b);
    return 0;
}
void display(struct booklist b1[])
{
    int i, p = 0;
    for (i = 0; i < 4; i++)
    {
        printf("book title:%s", b1[i].book_title);
        printf("\nbook author:%s", b1[i].book_author);
        printf("\nbook cost:%d", b1[i].cost);
        p = p + b1[i].cost;
    }
    printf("total cost of books:%d", p);
}