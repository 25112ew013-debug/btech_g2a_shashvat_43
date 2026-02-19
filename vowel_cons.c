#include<stdio.h>
int main(){
    char alphabet;
    printf("enter an alphabet");
    scanf("%c",&alphabet);
    if(alphabet==97 || alphabet==101 || alphabet==105 || alphabet==111 || alphabet==117 ||
   alphabet==65 || alphabet==69 || alphabet==73 || alphabet==79 || alphabet==85)
{
        printf("vowel",alphabet);

    }
    else{
        printf("consonants",alphabet);

    }

return 0;
}
