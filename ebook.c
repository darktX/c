#define CHUNK 1024
#include<stdio.h>
int main()
{
/* read 1024 bytes at a time */
char buf[CHUNK];
FILE *file;
size_t nread;

file = fopen("ebook.txt", "r");
if (file) {
    while ((nread = fread(buf, 1, sizeof buf, file)) > 0)
        //fwrite(buf, 1, nread, stdout);
fwrite(buf, 1,2,stdout);
    if (ferror(file)) {
        /* deal with error */
    }
    fclose(file);


}

}
