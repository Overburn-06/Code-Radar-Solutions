#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if (ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Vowel");
    }
    else (ch!='a' || ch!='e' || ch!='i'|| ch!='o'|| ch!='u' || ch!='A' || ch!='E' || ch!='I'|| ch!='O' || ch!= 'U'){
        printf("Consonant");
    }
    if(ch>=1){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    
    return 0;
}