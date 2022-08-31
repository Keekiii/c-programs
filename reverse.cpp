#include<stdio.h>
#include<string.h>
int main()
{
char mystrg[60];
int leng, g;
printf("Please insert the string you want to reverse: ");
scanf( "%s", mystrg);
leng = strlen(mystrg);
for(g = leng - 1; g >= 0; g--)
 {
     printf("%c", mystrg[g]);

 }
return 0;
}
