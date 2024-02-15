#include<stdio.h>

int mystrlen(char *s){
    int len = 0;
    while(*s != '\0'){
        len++;
        s++;
    }
    return len;
}

void mystrcpy(char *dest, char *src){
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void mystrcat(char *dest, char *src){
    while(*dest != '\0'){
        dest++;
    }
    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void mystrcmp(char *s1, char *s2){
    while(*s1 != '\0' && *s2 != '\0'){
        if(*s1 != *s2){
            printf("Not Equal\n");
            return;
        }
        s1++;
        s2++;
    }
    if(*s1 == '\0' && *s2 == '\0'){
        printf("Equal\n");
    }
    else{
        printf("Not Equal\n");
    }
}

int main(){

    //main function ta jevabe ache oivabe likhe function gula call koro

    return 0;
}