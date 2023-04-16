#include<stdio.h>
//#include<string.h>

int main(){
    int arr1[3][3]; 
    int arr2[3][3];

    printf("Please enter the elements in 1st 3x3 matix: ");
    

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Please enter the elemnts in 2nd 3x3 matrix: ");
    
    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            scanf("%d", &arr2[i][j]);
        }   
    }

    int sum[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("[\n");
    for(int i = 0; i < 3; i++){
        for(int j=0; j < 3; j++){
            printf(" %d",sum[i][j]);
        }
        printf("\n");
    }
    printf("]");
}