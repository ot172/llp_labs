#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

struct result {
    unsigned hits;
    unsigned misses;
    int rc;
};

struct result find_words_with_chars(char const *const path, char const search) {
    struct result res = {0, 0, 0};
    FILE *file = fopen(path, "r");
    
    if (!file) {
        res.rc = 1;
        return res;
    }
    
    int ch;
    int in_word = 0;
    int found = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            if (!in_word) {
                in_word = 1;
                found = 0;
            }
            if (ch == search) {
                found = 1;
            }
        } else {
            if (in_word) {
                if (found) {
                    res.hits++;
                } else {
                    res.misses++;
                }
                in_word = 0;
            }
        }
    }

    if (in_word) {
        if (found) {
            res.hits++;
        } else {
            res.misses++;
        }
    }
    
    fclose(file);
    return res;
}

// int main(void) {
//     struct result r;
    
//     r = find_words_with_chars("lab3.txt", 'o');
//     printf("%u:%u, ret: %d\n", r.hits, r.misses, r.rc);
    
//     r = find_words_with_chars("lab3.txt", 'j');
//     printf("%u:%u, ret: %d\n", r.hits, r.misses, r.rc);
    
//     r = find_words_with_chars("this_file_does_not_exist", 'e');
//     printf("%u:%u, ret: %d\n", r.hits, r.misses, r.rc);
    
//     return 0;
// }
