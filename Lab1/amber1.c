#include <stdio.h>

void sort_amber(float* values, size_t count, int(*comp)(float, float)) {
    int swapped;
    do {
        swapped = 0;
        for (size_t i = 0; i < count - 1; i++) {
            if (!comp(values[i], values[i + 1])) {
                float temp = values[i];
                values[i] = values[i + 1];
                values[i + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);
}

// int lt(float a, float b){return a <= b;}
// int gt(float a, float b){return a >= b;}
