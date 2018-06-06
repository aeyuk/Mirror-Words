
#include <stdio.h>
#include <string.h>
int main(void) {

    int lineWidth;
    char word[101];
    char line[101] = "";
    int j = 0;
    int k = 0;

    printf("Enter the output line length: ");
    scanf("%d", &lineWidth);
    
    if (lineWidth >= 10 && lineWidth <= 100) {
    
        printf("Enter text (control-d to exit): ");
        scanf("%s", word); //user input first word
        strcpy(line, word);
        scanf("%s", word);

        while (!feof(stdin)) {

            if ((strlen(word) + 1) <= lineWidth - strlen(line)) {
                strcat(line, " ");
                strcat(line, word);
            }
            else {
                for (j = 0, k = strlen(line) - 1; j < k; j++, k--) {
                    char temp = line[j];
                    line[j] = line[k];
                    line[k] = temp;
                }
                printf("%*s\n", lineWidth, line);
                line[0] = '\0';
                strcat(line, word);
            }
            scanf("%s", word);
        }

        for (j = 0, k = strlen(line) - 1; j < k; j++, k--) {
            char temp = line[j];
            line[j] = line[k];
            line[k] = temp;
        }

        printf("%*s\n", lineWidth, line);
   
    }
    
    else {
        printf("Error: output line must be 10 to 100 characters long.\n");
    }

    return 0;
}

