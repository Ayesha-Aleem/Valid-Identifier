#include <stdio.h>
#include<string.h>
int main() {
    int i=0,valid;
    char b[32];
    int f=1;
    printf("Enter a string to validate whether given is a identifier ot not:");
    gets(b);
    for(i=0;i< strlen(b);i++) {
        if((b[0]>=0 && b[0]<=9) || b[0]=='$' || b[0]=='@' || b[0]=='#'
           || b[0]=='!' || b[0]=='%' || b[0]=='^' || b[0]=='&' || b[0]=='*'
           || b[0]=='(' || b[0]==')' || b[0]=='=') {
            printf("Cant use special character/digits");
            return 0;
        }
        else if(b[valid]=='_' || ((b[valid]>=97 && b[valid]<=122) || (b[valid]<=65 && b[valid]>=90)) ||
                (b[valid]>='1' && b[valid]<='9')){
            valid++;
        }
        else {
            break;
        }
    }
    if(strlen(b)==valid) {
        printf("Valid identifier");
    }
    else
    {
        printf("Not a valid identifier");
    }
    return 0;
}
