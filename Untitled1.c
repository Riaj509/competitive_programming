#include<stdio.h>
int main()
{
    char c[2000];
    int spc=0,i=0;
    scanf("%[^*]",c);
    while(i<strlen(c))
    {
        if(c[i]==' ')
            spc++;
        i++;
    }
    printf("%d\n",spc);
}
