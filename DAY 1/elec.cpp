#include <stdio.h>

float calculateEnergyCharge(int units) {
    float bill = 0;

    if (units <= 100)
        bill = units * 4.28;
    else if (units <= 300)
        bill = (100 * 4.28) + (units - 100) * 7.11;
    else if (units <= 500)
        bill = (100 * 4.28) + (200 * 7.11) + (units - 300) * 15.38;
    else if (units <= 1000)
        bill = (100 * 4.28) + (200 * 7.11) + (200 * 15.38) + (units - 500) * 17.58;
    else
        bill = (100 * 4.28) + (200 * 7.11) + (200 * 15.38) + (500 * 17.58) + (units - 1000) * 19.50;

    return bill;
}

float calculateElectricityDuty(float bill) {
    return 0.16 * bill;
}

float calculateNetBill(float bill) {
    return bill + calculateElectricityDuty(bill) + 130 + 1.47;
}

int main() {
    int units;
    printf("Enter units consumed: ");
    scanf("%d", &units);

    float energyCharge = calculateEnergyCharge(units);
    float netBill = calculateNetBill(energyCharge);

    printf("Total Electricity Bill = %.2f\n", netBill);

    return 0;
}
