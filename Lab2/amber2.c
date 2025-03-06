#include <stdio.h>

int brainfart_amber(const char *commands) {
    int array[10] = {0};
    int pointer = 0;
    
    for (int i = 0; commands[i] != '\0'; i++) {
        switch (commands[i]) {
            case '+':
                array[pointer]++;
                break;
            case '-':
                array[pointer]--;
                break;
            case '>':
                pointer = (pointer + 1) % 10;
                break;
            case '<':
                pointer = (pointer - 1 + 10) % 10;
                break;
            case '[':
                if (array[pointer] == 0) {
                    int depth = 1;
                    while (depth > 0 && commands[++i] != '\0') {
                        if (commands[i] == '[') depth++;
                        else if (commands[i] == ']') depth--;
                    }
                }
                break;
            case ']':
                if (array[pointer] != 0) {
                    int depth = 1;
                    while (depth > 0 && i > 0) {
                        if (commands[--i] == ']') depth++;
                        else if (commands[i] == '[') depth--;
                    }
                }
                break;
            case '\0':
                return array[pointer];
        }
    }
    
    return array[pointer];
}

// int main(void) {
//     printf("Output: %d\n", brainfart_amber("+++[>++<-]>\0"));
//     return 0;
// }
