/** lab21-1.c
 * ===========================================================
 * Name: First Last
 * Section: xxx
 * Project: Lab 21
 * ===========================================================
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE* fp = NULL;
    char line[1024];

    //Get filename from user
    // printf("Enter filename: ");
    scanf("%s", filename);

    //Open file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file");
        return -1;
    } else {
        int col = 0;
        int row = 0;

        while ((fgets(line, 10254, fp)) != NULL) {
            col = 0;
            row++;

            char* item = strtok(line, ","); //Separates line into items delineated onf ","

            while (item){
                if (col == 1) {
                    printf("%s\n", item);
                }

                item = strtok(NULL, ",");
                col++;
            }
            // puts("\n");
        }
        fclose(fp);
    }
    return 0;
}