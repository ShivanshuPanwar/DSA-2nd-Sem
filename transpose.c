#include <stdio.h>

void main(){
    int row, col;
    
    printf("Enter the rows and columns of the matrix : ");
    scanf("%d %d", &row, &col);
    
    int  arr[row][col];
    int Tarr[col][row];
    printf("Enter elements in the matrix :\n");
    
    for(int i=0; i < row; i++){
        for(int j =0; j < col; j++){
            scanf("%d", &arr[i][j]);
        }
    } 

 	printf("The matrix is :\n");
    
    for(int i = 0; i < row; i++){
        printf("\n");
        for(int j = 0; j < col; j++){
            printf("%d\t", arr[i][j]);
        }     	
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            Tarr[j][i]=arr[i][j];
        }
    }
    
    printf("\n\nThe transpose of a matrix is : ");
    
    for(int i = 0; i < col; i++){
        printf("\n");
        for(int j = 0; j < row; j++){
            printf("%d\t", Tarr[i][j]);
        }
    }
    printf("\n\n");
}