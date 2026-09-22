#include <stdio.h>

int main() {
    
    float length,breadth,perimeter,area;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter perimeter: ");
    scanf("%f", &perimeter);

    // Calculate breadth from perimeter and
    breadth = (perimeter/2) - length;

    // Calculate area
    area = length * breadth;

    // Print the actual calculated values using %f format specifiers
    printf("breadth = %2f\n", breadth);
    printf("area = %.2f\n", area);

    return 0;

}