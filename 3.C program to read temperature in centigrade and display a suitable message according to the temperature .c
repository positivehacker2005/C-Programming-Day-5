#include <stdio.h>

int main() {
    float temperature;
    
    printf("Enter temperature in centigrade: ");
    scanf("%f", &temperature);
    
    if (temperature < 0) {
        printf("Freezing weather.\n");
    } else if (temperature >= 0 && temperature < 10) {
        printf("Very cold weather.\n");
    } else if (temperature >= 10 && temperature < 20) {
        printf("Cold weather.\n");
    } else if (temperature >= 20 && temperature < 30) {
        printf("Normal in temperature.\n");
    } else if (temperature >= 30 && temperature < 40) {
        printf("It's hot.\n");
    } else {
        printf("It's very hot.\n");
    }
    
    return 0;
}
