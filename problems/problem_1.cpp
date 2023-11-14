void problemSolution1(float consumed_water) {
    float cost;
#include <iostream>
using namespace std;

int main() {
    const double fixedAmount = 13.0;
    const double rate1 = 0.4;
    const double rate2 = 0.12;
    const double rate3 = 1.4;
    const double additionalRate = 1.5;
    double consumption;
    cin >> consumption;
    double totalCost = fixedAmount;
    if (consumption > 30) {
        totalCost += 30 * rate1;
        consumption -= 30;

        if (consumption > 20) {
            totalCost += 20 * rate2;
            consumption -= 20;

            if (consumption > 10) {
                totalCost += 10 * rate3;
                consumption -= 10;

                totalCost += consumption * additionalRate;
            } else {
                totalCost += consumption * rate3;
            }
        } else {
            totalCost += consumption * rate2;
        }
    } else {
        totalCost += consumption * rate1;
    }
    cout << totalCost << endl;

    return 0;
}

    return cost;
}
