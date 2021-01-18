#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main(int argc, char **argv) {
    char pass[12];
    srand((unsigned int)(time(NULL)));

    for (int i = 0; i < 4; i++) {
        pass[i] = rand() % 10;
        char capLetter = 'A' + (rand() % 26);
        pass[i + 2] = capLetter;
        char letter = 'a' + (rand() % 26);
        pass[i + 3] = letter;
        printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
    }
    printf("\n");
}

