#pragma once

#include <stdio.h>
#include <string.h>

int strlen(char* text) {
    int len = 0;
    while (text[len] != '\0') {
        len++;
    }
    return len;
}

char* frame(char* text, int width) {
    int len = strlen(text);
    int lines;
    for (int i = 0; i < len; i++) {
        if (text[i]) {
            lines ++;
        }
    }
    printf("%d", lines);
    return "Hello there\0";
}