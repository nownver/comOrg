#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int target = (rand() % 99) + 1;
    int guess, attempts;


    for (attempts = 0; attempts < 5; attempts++) {
        printf("Attempt %d - Enter your guess: ", attempts + 1);
        scanf("%d", &guess);

        int result = sub_s(guess, target);
        if (result == 0) {
            printf("you win\n");
            break;
        } else {
            printf("not match\n");
        }
    }

    if (attempts == 5) {
        printf("you lose\n");
    }

    return 0;
}