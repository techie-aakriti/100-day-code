#include <stdio.h>

enum Days { MON, TUE, WED, THU, FRI };

int main() {
    char *days[] = {"MON", "TUE", "WED", "THU", "FRI"};

    for(int i = 0; i <= FRI; i++) {
        printf("%s = %d\n", days[i], i);
    }

    return 0;
}