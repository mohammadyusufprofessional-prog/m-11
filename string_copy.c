#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s %s",&a,&b);
    strcpy(a,b);
    printf("%s %s", a, b);
    return 0;
}
// main logic
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[101], b[101];
//     scanf("%s %s", &a, &b);
//     int lenght = strlen(b);
//     for (int i = 0; i <= lenght; i++)
        
//     {
//         a[i] = b[i];
//     }
//     printf("%s %s", a, b);
//     return 0;
// }
