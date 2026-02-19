#include<stdio.h>
int main(){
    char ch;
    printf("enter character\n");
    scanf("%c",&ch);
   if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)){
    printf("ch is alphabet",ch);

   }
   else if ((ch >= 32 && ch <= 47) ||
    (ch >= 58 && ch <= 64) ||
    (ch >= 91 && ch <= 96) ||
    (ch >= 123 && ch <= 126))
{
    printf("It is a special character.",ch);

}
else{ printf("it is a numerical digit",ch);}
return 0;

}
