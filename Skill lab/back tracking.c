#include<stdio.h>
#include<stdbool.h>
#define n 4
int board[n][n];
void printboard(){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            printf("%c",board[i][j] ? 'Q':'-');
            }
            printf("\n");
            }
            printf("\n");
            }
            bool issafe(int row,int col){
                for(int i=0;i<col;i++)
                if(board[row][i])
                return false;
                for(int i=row,j=col;i>=0&&j>=0;i--,j--)
                if(board[i][j])
                return false;
                for(int i=row,j=col;i<n&&j>=0;i++,j--)
                if(board[i][j])
                return false;
                return true;
                }
                bool solvenqueens(int col){
                    if(col==n){
                        printboard();
                        return true;
                        }
                        bool res=false;
                        for(int i=0;i<n;i++){
                            if(issafe(i,col)){
                                board[i][col]=1;
                                res=solvenqueens(col+1)||res;
                                board[i][col]=0;
                                }
                                }
                                return res;
                                }
                                int main(){
                                    for(int i=0;i<n;i++)
                                    for(int j=0;j<n;j++)
                                    board[i][j]=0;
                                    solvenqueens(0);
                                    return 0;
                                    }
