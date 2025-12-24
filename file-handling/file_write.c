#include <stdio.h>
int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");

    if(fp == NULL) {
        printf("File not opened");
        return 1;
    }

    fprintf(fp, "This is a file handling program in C");
    fclose(fp);

    printf("Data written to file successfully");
    return 0;
}
