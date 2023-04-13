#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_VALUE 999999

void main(){
    char strings[MAX_VALUE];
    int pos;
    printf("wHaT dO yOu WaNt To CoNvErT?: ");
    gets(strings);

    for(pos=0;pos<MAX_VALUE&&strings[pos]!='\0'; pos++){
        if(isalpha(strings[pos])){
            if(pos%2==0){
                strings[pos] = toupper(strings[pos]);
            }
            else{
                strings[pos] = tolower(strings[pos]);
            }
        }
    }
    printf("%s", strings);
}
