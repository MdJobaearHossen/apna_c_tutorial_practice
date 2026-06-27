#include <stdio.h>

float rice, dal, onion, garlic, potato, tomato, turmeric, chili, salt, oil;

int main() {
    
    printf("Enter weight of Rice (kg): ");
    scanf("%f", &rice);
    
    printf("Enter weight of Lentils/Dal (kg): ");
    scanf("%f", &dal);
    
    printf("Enter weight of Onion (kg): ");
    scanf("%f", &onion);
    
    printf("Enter weight of Garlic (kg): ");
    scanf("%f", &garlic);
    
    printf("Enter weight of Potato (kg): ");
    scanf("%f", &potato);
    
    printf("Enter weight of Tomato (kg): ");
    scanf("%f", &tomato);
    
    printf("Enter weight of Turmeric (kg): ");
    scanf("%f", &turmeric);
    
    printf("Enter weight of Chili Powder (kg): ");
    scanf("%f", &chili);
    
    printf("Enter weight of Salt (kg): ");
    scanf("%f", &salt);
    
    printf("Enter weight of Oil (kg): ");
    scanf("%f", &oil);
    
    printf("\nWeights(kg) of the items entered:\n");
    printf("%s %f\n", "Rice", rice);
    printf("%s %f\n", "Lentils/Dal", dal);
    printf("%s %f\n", "Onion", onion);
    printf("%s %f\n", "Garlic", garlic);
    printf("%s %f\n", "Potato", potato);
    printf("%s %f\n", "Tomato", tomato);
    printf("%s %f\n", "Turmeric", turmeric);
    printf("%s %f\n", "Chili Powder", chili);
    printf("%s %f\n", "Salt", salt);
    printf("%s %f\n", "Oil", oil);
    
    return 0;
}
