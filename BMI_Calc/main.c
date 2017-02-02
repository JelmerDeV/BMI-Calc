#include <stdio.h>
#include <stdbool.h>
float CalculateBMI(float _weight, float _lenght);
float weight;
float lenght;
char name;
int age;
char reset;


int main()
{
    printf("Please enter your name: ");
    scanf("%s", &name);
    printf("Please enter your age: ");
    scanf("%d", &age);
    printf("Hello %s\n",&name);
    printf("Please enter your weight in KG :");
    scanf("%f", &weight);
    printf("Please enter your height in M : ");
    scanf("%f", &lenght);
    
    CalculateBMI(weight, lenght);
    getchar();
    
}

float CalculateBMI(float _weight, float _lenght)
{
    
    printf("Your body mass index is: %f", _weight / (_lenght * _lenght));
    return 0;
}
