#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    char source='A',auxiliary='B',destination='C';
    towerofhanoi(n,source,auxiliary,destination);
    return 0;
}
void towerofhanoi(int n,char source,char auxiliary,char destination){
    if(n==1){
        printf("Move disk 1 from %c to %c\n",source,destination);
        return;
    }
    towerofhanoi(n-1,source,destination,auxiliary);
    printf("Move disk %d from %c to %c\n",n,source,destination);
    towerofhanoi(n-1,auxiliary,source,destination);
}
