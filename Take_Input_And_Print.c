#include<stdio.h>
int main()
{
    char ch[100];
    scanf("%[^
]%*c",&ch);
    printf("%s",ch);
}