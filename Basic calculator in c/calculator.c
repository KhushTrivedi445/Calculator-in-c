#include<stdio.h>
int main () {
    float a,b,choice;

    printf("Enter value of a :");
    scanf("%f",&a);

    printf("Enter value of b :");
    scanf("%f",&b);

    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Difference\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    scanf("%f",&choice);

if (choice==1){
    printf("The addition is %f",a+b);
} else if (choice==2){
    printf("The difference is %f",a-b);
} else if(choice==3){
    printf("The multiplication is %f",a*b);
} else if (choice==4){
    printf("The division is %f",a/b);
} else {
    printf("Enter valid choice");
}

return 0;

}