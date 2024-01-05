#include<stdio.h>
int main(){
    FILE*fptr;
    fptr=fopen("filename.txt",'w');
    fprintf(fptr,"Hello World");
    return 0;
}