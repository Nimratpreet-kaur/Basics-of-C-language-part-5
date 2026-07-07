// operations on file = create,open,close,read,write.
//types of files= text(.txt,.c),binary(.exe,.mp3,.jpg)
#include <stdio.h>
int main()
{
    
    //fptr = fopen("filename",mode);[opening]
    /*
    modes
    "r" to read
    "rb" to read in binary
    "w" to write{even if file does't exist it creates one}
    "wb" to write in binary
    "a" to append
    */
    //fclose(fptr);[closing]
    FILE *fptr;
    fptr = fopen("newtest.txt","r");
    if(fptr==NULL)
    {
        printf("File doesn't exist.\n");
    }
    else
    {
    fclose(fptr);
    }
    //reading from file
    fptr = fopen("test.txt","r");
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("Character : %c\n",ch);//happens character by character
    fscanf(fptr,"%c",&ch);
    printf("Character : %c\n",ch);
    fscanf(fptr,"%c",&ch);
    printf("Character : %c\n",ch);
    printf("Character : %c\n",fgetc(fptr));
    printf("Character : %c\n",fgetc(fptr));
    printf("Character : %c\n",fgetc(fptr));
    
    //write to file
    fptr = fopen("test.txt","w");//replace the old data i.e clears old data and write new
    fprintf(fptr,"%c",'G');
    fprintf(fptr,"%c",'R');
    fprintf(fptr,"%c",'A');
    fputc('P',fptr);
    fputs('E',fptr);
    fputs('S',fptr);
    //fgetc(fptr) to read
    //fputc('A',fptr) to write
    //EOF (end of file)(like null character)
    return 0;
}