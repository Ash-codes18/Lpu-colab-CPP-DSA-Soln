#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isWordPresent(const char* sentence, const char* targetWord) {
    int sentenceLength = strlen(sentence);
    int targetLength = strlen(targetWord);

    for (int i = 0; i <= sentenceLength - targetLength; i++) {
        bool found = true;
        for (int j = 0; j < targetLength; j++) {
            if (sentence[i + j] != targetWord[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return true;
        }
    }

    return false;
}

int main() {
    char sentence[1000];
    char targetWord[100];

    fgets(sentence, sizeof(sentence), stdin);
    fgets(targetWord, sizeof(targetWord), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';
    targetWord[strcspn(targetWord, "\n")] = '\0';

    if (isWordPresent(sentence, targetWord)) {
        printf("The word '%s' is present in the given sentence.\n", targetWord);
    } else {
        printf("The word '%s' is not present in the given sentence.\n", targetWord);
    }

    return 0;
}
