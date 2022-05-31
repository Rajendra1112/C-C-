#include <stdio.h>
#include <string.h>
void display(char c1[])
{
    int i = 0;
    while (c1[i] != '\0')
    {
        printf("\n%c", c1[i]);
        i++;
    }
    printf("\n");
}
int main()
{
    //first way to initialize string..which is very long..
    char c[5];
    c[0] = 'R';
    c[1] = 'a';
    c[2] = 'm';
    c[3] = 'a';
    c[4] = '\0';
    printf("string=%s", c);
    int len = strlen(c);
    printf("\nlength=%d", len);
    //second way to initialize string array..
    char ch[5] = {'H', 'O', 'M', 'E', '\0'};
    printf("\n%s", ch);
    //second way using string literal farmat where string temination is implict..
    char raj[9] = "Rajendra";
    printf("\n%s", raj);
    int leng = strlen(raj);
    printf("\nlength of raj character array=%d", leng);
    printf("\nsize of character array is:%d", sizeof(raj)); //size should one more than length as we know one byte for null teminal..
    display(raj);
    return 0;
}