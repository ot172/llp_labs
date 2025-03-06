#ifndef LAB3_AMBER_H
#define LAB3_AMBER_H

#define RELU(arr, len)              \
    do {                            \
        for (size_t i = 0; i < (len); i++) { \
            (arr)[i] = ((arr)[i] < 0) ? 0 : (arr)[i]; \
        }                           \
    } while (0)

#endif
