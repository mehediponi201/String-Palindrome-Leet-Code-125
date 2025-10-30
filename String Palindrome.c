

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<ctype.h>
bool isPalindrome(char str2[])
{
    int len = strlen(str2);
    int left=0,right=len-1;
    while(left<right)
    {
        if(!isalnum(str2[left]))
        {
            left++;
        }
        else if(!isalnum(str2[right]))
        {
            right--;
        }
        else if(tolower(str2[left]) != tolower(str2[right]))
        {
            return false;
        }
        else
        {
            left++;
            right--;
        }
    }
    return true;

}
int main()
{
    char str1[50];
    printf("Enter the string:");
    fgets(str1,sizeof(str1),stdin);
    if(isPalindrome(str1))
    {
        printf("palindrome");
    }
    else
        printf("Not palindrome");
}
