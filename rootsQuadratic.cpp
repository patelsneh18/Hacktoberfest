#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float root1,root2;
    float imaginary,discriminant;
    printf("Enter a,b,c for ax^2+bx+c : ");
    scanf("%f%f%f",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    switch (discriminant>0)
    {
    case 0:
        switch (discriminant<0)
        {
        case 1:
            root1=root2=-b/(2*a);
            imaginary = sqrt(-discriminant)/(2*a);
            printf("Two distinct Complex Roots Exist: %.2f + i%.2f and %.2f - i%.2f",root1,imaginary,root2,imaginary);
            break;
        
        default:
            root1=root2=-b/(2*a);
            printf("Two Equal and Real Roots Exist: %.2f",root1);
            break;
        }
        break;

    case 1:
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("Two real and distinct roots exist: %.2f and %.2f",root1,root2);
        break;

    default:
        printf(" NULL");
        break;
    }
}