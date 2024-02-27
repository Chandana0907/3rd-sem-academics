 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FILES 100
#define MAX_NAME_LENGTH 50

struct Directory {
    char files[MAX_FILES][MAX_NAME_LENGTH];
    int file_count;
};

void createFile(struct Directory *dir);
void listFiles(struct Directory *dir);
void deleteFile(struct Directory *dir);

int main() {
    struct Directory single_level_dir;
    single_level_dir.file_count = 0;
    int choice;

    while (1) {
        printf("\nSingle Level Directory Simulation\n");
        printf("1. Create a file\n");
        printf("2. List files\n");
        printf("3. Delete a file\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createFile(&single_level_dir);
                break;
            case 2:
                listFiles(&single_level_dir);
                break;
            case 3:
                deleteFile(&single_level_dir);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice. Please enter again.\n");
        }
    }

    return 0;
}

void createFile(struct Directory *dir) {
    if (dir->file_count == MAX_FILES) {
        printf("Directory is full. Cannot create more files.\n");
        return;
    }

    printf("Enter file name: ");
    scanf("%s", dir->files[dir->file_count]);
    printf("File '%s' created successfully.\n", dir->files[dir->file_count]);
    dir->file_count++;
}

void listFiles(struct Directory *dir) {
    if (dir->file_count == 0) {
        printf("Directory is empty.\n");
        return;
    }

    printf("Files in the directory:\n");
    for (int i = 0; i < dir->file_count; i++) {
        printf("%d. %s\n", i + 1, dir->files[i]);
    }
}

void deleteFile(struct Directory *dir) {
    if (dir->file_count == 0) {
        printf("Directory is empty. Nothing to delete.\n");
        return;
    }

    char filename[MAX_NAME_LENGTH];
    printf("Enter the name of the file to delete: ");
    scanf("%s", filename);

    int found = 0;
    for (int i = 0; i < dir->file_count; i++) {
        if (strcmp(dir->files[i], filename) == 0) {
            found = 1;
            printf("File '%s' deleted successfully.\n", dir->files[i]);
            strcpy(dir->files[i], dir->files[dir->file_count - 1]);
            dir->file_count--;
            break;
        }
    }

    if (!found)
        printf("File '%s' not found in the directory.\n", filename);
}
#b) TWO LEVEL DIRECTORY ORGANIZATION 
#include<stdio.h> struct 
{ 
char dname[10],fname[10][10]; int fcnt; 
}dir[10]; 
void main() 
{ 
int i,ch,dcnt,k; char f[30], 
d[30]; clrscr(); 
dcnt=0; 
while(1)
{
printf("\n\n1. Create Directory\t2. Create File\t3. Delete File"); 
printf("\n4. Search File\t\t5. Display\t6. Exit\t 
Enter your choice -");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\nEnter name of directory -- "); scanf("%s", 
dir[dcnt].dname); dir[dcnt].fcnt=0;
dcnt++;
printf("Directory created"); break;
case 2: printf("\nEnter name of the directory -- "); 
scanf("%s",d);
for(i=0;i<dcnt;i++)
if(strcmp(d,dir[i].dname)==0)
{
printf("Enter name of the file -- "); 
scanf("%s",dir[i].fname[dir[i].fcnt]); 
dir[i].fcnt++;
printf("File created"); break;
}
if(i==dcnt)
printf("Directory %s not found",d);
break;
case 3: printf("\nEnter name of the directory -- "); 
scanf("%s",d);
for(i=0;i<dcnt;i++)
{
if(strcmp(d,dir[i].dname)==0)
{
{
printf("File %s is deleted ",f); dir[i].fcnt--;
strcpy(dir[i].fname[k],dir[i].fname[dir[i].fcnt]); goto jmp;
}
}
printf("File %s not found",f); goto jmp;
}
}
printf("Directory %s not found",d); jmp : break;
case 4: printf("\nEnter name of the directory -- "); scanf("%s",d);
for(i=0;i<dcnt;i++)
{
if(strcmp(d,dir[i].dname)==0)
{
printf("Enter the name of the file -- "); scanf("%s",f); 
for(k=0;k<dir[i].fcnt;k++)
{
if(strcmp(f, dir[i].fname[k])==0)
{
printf("File %s is found ",f); goto jmp1;
}
}
printf("File %s not found",f); goto jmp1;
}
}
printf("Directory %s not found",d); jmp1: break;
case 5: if(dcnt==0)
printf("\nNo Directory's ");
else
{
printf("\nDirectory\tFiles");
for(i=0;i<dcnt;i++)
{
printf("\n%s\t\t",dir[i].dname);
for(k=0;k<dir[i].fcnt;k++)
printf("\t%s",dir[i].fname[k]);
}
}
break;
default:exit(0);
}
}
getch();
}
