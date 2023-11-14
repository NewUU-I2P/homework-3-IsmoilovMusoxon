void problemSolution1(float consumed_water) {
    float cost;
#include <iostream>
using namespace std;

int main() {
    if (consumed_water > 30) {
        totalCost += 30 * 0.4;
        consumed_water -= 30;

        if (consumed_water > 20) {
            totalCost += 20 * 0.12;
            consumed_water -= 20;

            if (consumed_water > 10) {
                totalCost += 10 * 1.4;
                consumed_water -= 10;

                totalCost += consumed_water * 1.5;
            } else {
                totalCost += consumed_water * 1.4;
            }
        } else {
            totalCost += consumed_water * 0.12;
        }
    } else {
        totalCost += consumed_water * 0.4;
    }
    cout << totalCost << endl;

    return 0;
}

    return cost;
}
