#include <stdio.h>

int brainfart_red(char const *commands) {
    int arr[10] = {0};
    int ptr = 0;

    for (int i = 0; commands[i] != '\0'; i++) {
        switch (commands[i]) {
            case '+': 
                arr[ptr]++;
                break;
            case '-': 
                arr[ptr]--;
                break;
            case '>': 
                ptr = (ptr + 1) % 10;
                break;
            case '<': 
                ptr = (ptr - 1 + 10) % 10;
                break;
            case '@': 
                return arr[ptr];
            default:
                break;
        }
    }
    
    return arr[ptr];
}
