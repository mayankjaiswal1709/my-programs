//point out the error, if any ,in the following programs.


#include<stdio.h> 
int main()
{
    unsigned char;

FILE*fp;
fp=fopen("trial","r");
 while ((ch=getc(fp))!=EOF)
 printf("%c",ch);

 fclose(fp);
return 1;

}


//unsinged ??`
and error in 11 th line ch