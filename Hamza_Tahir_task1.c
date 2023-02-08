#include<stdio.h>
#include<string.h>

int checkPalindrome(char str[]){
    int i,length=strlen(str);
    
    for(i=0;i<length;i++){
        if(str[i]!=str[length-i-1])
            return 0;
    }
    return 1;
}

int main(){
    char str[50];
    printf("Enter a string without spaces: ");
    scanf("%s",str);
    if(checkPalindrome(str))
        printf("%s is palindrome",str);
    else
        printf("%s is not palindrome",str);

}
