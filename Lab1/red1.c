#include <stdio.h>

void sort_red(float* values, size_t count) {
	int swapped;
	do {
	    swapped = 0;
	    for (size_t i = 0; i < count - 1; i++) {
		if (values[i] > values[i + 1]) {
		    float temp = values[i];
		    values[i] = values[i + 1];
		    values[i + 1] = temp;
		    swapped = 1;
		}
	    }
	} while (swapped);
}
