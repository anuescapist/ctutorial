#include <stdio.h>

int main() {
    float principal, time, rate, SI;
    
    // Input the principal, time, and rate
    printf("Enter the principal: ");
    scanf("%f", &principal);
    
    printf("Enter the time (in years): ");
    scanf("%f", &time);
    
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    
    // Calculate simple interest
    SI = (principal * time * rate) / 100;
    
    // Output the result
    printf("Simple Interest = %.2f\n", SI);
    
    return 0;
}
