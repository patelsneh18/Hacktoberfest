#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    scanf("%d",&number);
    int lastDigit,firstDigit,digits;
    digits = (int)log10(number);
    lastDigit = number%10;
    firstDigit = (int)number/pow(10,digits);
    int power = (int)pow(10,digits);
    int swappedNum = lastDigit*pow(10,digits);
    swappedNum = swappedNum + number%power;
    swappedNum = swappedNum - lastDigit;
    swappedNum = swappedNum + firstDigit;
    printf("%d",swappedNum);
}