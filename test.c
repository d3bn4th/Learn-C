#include <stdio.h>

int main()
{
    char ch[50];
    char s[50];
    char sen[50];

    scanf("%[^\n]%*c", ch);
    scanf("%[^\n]%*c", s);
    scanf("%[^\n]%*c", sen);
    
    printf("%s\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    
    return 0;
}
