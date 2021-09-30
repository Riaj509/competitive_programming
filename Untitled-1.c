#include <stdio.h>
#include <string.h>

void white_space(char s1[], int x)
{
    int i = 0, cnt = 0;
    while (i < x)
    {
        if (s1[i] == ' ')
            cnt++;
        i++;
    }

    printf("%d\n", cnt);
}
void keyword(string s, int x)
{
}

void identifiers(string s, int x)
{
    int tk = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (tk == 0)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == '_')
            {
                tk = 1;
                temp[k] = s[i];
                k++;
            }
            else
            {
                tk = 2;
            }
        }
        else if (tk == 1)
        {
            if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || s[i] == '_')
            {
                temp[k] = s[i];
                k++;
                tk = 1;
            }
            else if (s[i] == ' ' || s[i] == '\n' || s[i] == ';')
            {
                printf("%s\n", temp);
                ok = 1;
                k = 0;
                memset(temp, 0, sizeof(temp));
                tk = 0;
            }
            else
            {
                tk = 2;
            }
        }
        else
        {
            if (s[i] == ' ' || s[i] == '\n' || s[i] == ';')
            {
                k = 0;
                memset(temp, 0, sizeof(temp));
                tk = 0;
            }
        }
    }
    printf("%s\n", temp);
}
void digits(char s[], int x)
{
    int i = 0, cnt = 0;
    while (i < x)
    {
        if (s[i] >= '0' && s[i] <= '9')
            cnt++;
        i++;
    }
    printf("%d\n", cnt);
}

void comment(char s[], int x)
{
    int i, j, k = 0, f = 0;
    char temp[1000];
    for (i = 0; i < x; i++)
    {
        if (s[i] == '/' && s[i + 1] == '/')
        {
            for (j = i; s[j] != '\n'; j++)
            {
                temp[k] = s[j];
                f = 1;
                k++;
            }
            printf("%s\n", temp);
            memset(temp, 0, sizeof(temp));
            f = 0;
            continue;
        }
        else if (s[i] == '/' && s[i + 1] == '*')
        {
            for (j = i; s[j] != '*' && s[j + 1] != '/'; j++)
            {
                temp[j] = s[j];
                f = 1;
                k++;
            }

            printf("%s\n", temp);
            memset(temp, 0, sizeof(temp));
            f = 0;
            continue;
        }
    }
    if (f == 1)
        printf("%s\n", temp);
}

int main()
{
    int ln;
    char s[1000], temp[1000];
    scanf("%[^;]", s);
    ln = strlen(s);
    white_space(s, ln);
    keyword(s, ln);
    identifiers(s, ln);
    digits(s, ln);
    comment(s, ln);
}