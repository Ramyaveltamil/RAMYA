#include<stdio.h>
int main()
{
char a;
int isLowercaseVowel,isUppercaseVowel;
printf("Enter the alphabet:");
scanf("%c",&a);
isLowercaseVowel=(a=='a'||a=='e'||a=='i'||a=='o'||a=='u');
isUppercaseVowel=(a=='A'||a=='E'||a=='I'||a=='O'||a=='U');
if(isLowercaseVowel||isUppercaseVowel)
printf("%c is a vowel",a);
else
printf("%c is a constant",a);
return 0;
}
