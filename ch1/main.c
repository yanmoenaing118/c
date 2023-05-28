#include <stdio.h>
#include <ctype.h>

#define MAX_WORD_LENGTH 20

void print_histogram(int histogram[]) {
    int max_count = 0;
    for (int i = 0; i < MAX_WORD_LENGTH; i++) {
        if (histogram[i] > max_count) {
            max_count = histogram[i];
        }
    }

    for (int i = max_count; i > 0; i--) {
        for (int j = 0; j < MAX_WORD_LENGTH; j++) {
            if (histogram[j] >= i) {
                printf("   *");
            } else {
                printf("    ");
            }
        }
        printf("\n");
    }

    for (int i = 0; i < MAX_WORD_LENGTH; i++) {
        printf("----");
    }
    printf("\n");

    for (int i = 0; i < MAX_WORD_LENGTH; i++) {
        printf("%3d ", i);
    }
    printf("\n");
}

void count_words(char *str, int histogram[]) {
    int len = 0;
    while (*str != '\0') {
        if (isalpha(*str)) {
            len++;
        } else {
            if (len > 0 && len < MAX_WORD_LENGTH) {
                histogram[len]++;
            }
            len = 0;
        }
        str++;
    }
}

int main() {
    char code[] = "This is a sample code for a C program. "
                  "The purpose of this code is to demonstrate "
                  "how to print a vertical histogram of word occurrences.";

    int histogram[MAX_WORD_LENGTH] = {0};

    count_words(code, histogram);
    print_histogram(histogram);

    return 0;
}
