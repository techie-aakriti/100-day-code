#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int len = strlen(s);
    int maxLen = 0;

    for(int i = 0; i < len; i++) {
        int visited[256] = {0};
        int count = 0;

        for(int j = i; j < len; j++) {
            if(visited[s[j]])
                break;

            visited[s[j]] = 1;
            count++;

            if(count > maxLen)
                maxLen = count;
        }
    }

    printf("%d", maxLen);

    return 0;
}