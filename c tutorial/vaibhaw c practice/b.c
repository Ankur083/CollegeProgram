#include <stdio.h>
int main() {
FILE *file1, *file2, *mergedFile;
char ch;
file1 = fopen("file1.txt", "r");
file2 = fopen("file2.txt", "r");
mergedFile = fopen("merged.txt", "w");
if (file1 == NULL || file2 == NULL || mergedFile == NULL) {
printf("Error opening file.\n");
return 1;
}
while ((ch = fgetc(file1)) != EOF) {
fputc(ch, mergedFile);
}
fclose(file1);
while ((ch = fgetc(file2)) != EOF) {
fputc(ch, mergedFile);
}
fclose(file2);
fclose(mergedFile);
printf("Files merged into merged.txt.\n");
return 0;
}


