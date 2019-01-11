#include<stdio.h>
#include<conio.h>
int main()
{
    int n=3,x,sum=0,j;
    char names[50];
    FILE *fp=fopen("names.txt","w");
    for(j=0;j<n;j++)
    {
        printf("Enter name and age:");
        scanf("%s %d",&names,&x);
        fprintf(fp,"%s %d",names,x);
    }
    fclose(fp);
    fp=fopen("names.txt","r");
    while(!feof(fp))
    {
        fscanf(fp,"%s %d",&names,&x);
        printf("%s %d",names,x);
    }
    getch(); return(0);
}
