void problemSolution1(float consumed_water) {
float cost;
    cost = 0
    if (consumed_water > 30) {
        Cost += 30 * 0.4;
        consumed_water -= 30;

        if (consumed_water > 20) {
            Cost += 20 * 0.12;
            consumed_water -= 20;

            if (consumed_water > 10) {
                Cost += 10 * 1.4;
                consumed_water -= 10;

                Cost += consumed_water * 1.5;
            } else {
                Cost += consumed_water * 1.4;
            }
        } else {
            Cost += consumed_water * 0.12;
        }
    } else {
        Cost += consumed_water * 0.4;
    }
    cost += 13
    return 0;
}

    return cost;
}
