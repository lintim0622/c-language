#include <stdio.h>
#include <fcntl.h>
#include <io.h>
#include <sys/stat.h>
#define SIZE 512

int main() {
    char buffer[SIZE];
    int f1, f2, bytes;
    f1 = open("welcome.txt", O_RDONLY | O_TEXT);
    f2 = creat("output2.txt", S_IWRITE);
    if (f1 != -1 && f2 != -1) {
        while (!eof(f1)) {
            bytes = read(f1, buffer, SIZE);
            write(f2, buffer, bytes);
        }
        close(f1);
        close(f2);
        printf("file copy finish!\n");
    }
    else
        printf("file open fail!!\n");
    return 0;
}