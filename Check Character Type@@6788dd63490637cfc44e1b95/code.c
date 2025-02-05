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
    else if (ch!='a' || ch!='e' || ch!='i'|| ch!='o'|| ch!='u'){
        printf("Consonant");
    }
    // else if(ch>=1){

    // }
    
    return 0;
}