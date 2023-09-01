#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>


bool isPalindrome(const char* str){
    int len = strlen(str);
    int i = 0;
    int j = len - 1;

    while(i<j){
        if (tolower(str[i]) != tolower(str[j])) {
            return false;
        }
        i++;
        j--;
    }
    return true;

}
int main(){

    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    if(isPalindrome(input)){
        printf("Pal");
    }
    else{
        printf("no Pal;");
    }

    return 0;
}


