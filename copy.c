#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{
    
    char a[1000];
    printf(" ENTER A STRING\n");
    scanf("%[^\n]s",a);
    char b[strlen(a)];
    strcpy(b,a);
    printf("copied string:   %s",b);
    printf("\n %d are the number of characters copied",strlen(a));
    getch();
}
