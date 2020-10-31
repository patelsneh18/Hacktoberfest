#include<stdio.h>
#include<math.h>

int main(){
    int number;
    printf("Enter the Number : ");
    scanf("%d",&number);
    int length = log10(number) + 1;
    printf("%d",length);
}