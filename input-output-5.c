// point out the error, i any , in the following program.

#include<stdio.h> 
int main()
{
unsigned char;
FILE*fp;

fp=fopen("trial","r");
if(fp)
{
    printf("unable to open file");
    exit();

}
fclose(fp);
}


//error in this program is ----  exit 
