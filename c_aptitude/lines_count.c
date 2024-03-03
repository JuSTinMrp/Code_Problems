#include <stdio.h>

int main() {
    int count=0, blank=0, comm=0, semi=0;
    char filename[50], i;
    FILE *fp;
    scanf("%s", filename);
    fp=fopen(filename, "r");
    for (i=getc(fp); i!=EOF; i=getc(fp)){
        if (i=='\n'){
            count+=1;
        }
        if (i=='\n'){
            if ((i=getc(fp))=='\n'){
                blank+=1;
                fseek(fp, -1, 1);
            }
        }
        if (i == ';'){
            if ((i=fgetc(fp)) == '\n'){
                fseek(fp, -1,1);
                semi+=1;
            }
        }
    }
        fseek(fp, 0,0);
        while ((i =fgetc(fp)) != EOF){
            if (i =='/')
                if ((i=getc(fp)) == '/' ){
                    comm+=1;
                }
        }
    fclose(fp);
    printf("Total no.of lines: %d\n", count);
    printf("Total no.of blank lines: %d\n", blank);
    printf("Total no.of comment lines: %d\n", comm);
    printf("Total no.of semicolon ended lines: %d\n", semi);
}