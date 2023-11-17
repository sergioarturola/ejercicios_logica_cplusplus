#include<stdio.h>
#include<string.h>
int main(){

        char password[30];
        char real_pass = "redjan";
        printf("Enter password: ");
        scanf("%s", &password);

        //int compare = (strcmpi(password, "redjan"));
        (strcmpi(password, "redjan") == 0)? printf("Correct pass"): printf("wrong pass");





 return 0;
}
