#include <stdio.h>
#define POUNDTOKG 0.453592
  int main() {
        float pound, kilogram;
        printf("Enter weight in pound:");
        scanf("%f", &pound);
        kilogram = pound * POUNDTOKG;
        printf("%.2f pound = %.2f KiloGram\n", pound, kilogram);
        return 0;
  }

