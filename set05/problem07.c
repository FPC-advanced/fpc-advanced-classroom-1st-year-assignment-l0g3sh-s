#include <stdio.h>
void input(char *name);
int has_nice_name(char *name);
void output(int res);
int main()
{
    char name[100];
    int res;
    input(name);
    res = has_nice_name(name);
    output(res);
    return 0;
}
void input(char *name)
{
    printf("Enter a name:\n");
    scanf("%s", name);
}
int has_nice_name(char *name)
{
    int v = 0, c = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        char ch = tolower(name[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            v++;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            c++;
        }
    }
    if (v >= 2 && c >= 2)
    {
        return 0;
    }
    else
        return 1;
}
void output(int res)
{
    if (res == 0)
    {
        printf("The camel has a nice name");
    }
    else
    {
        printf("The camel does not have a  nice name");
    }
}