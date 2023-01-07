#include <stdio.h>

void multiply(int dim, int A[][dim], int B[][dim], int C[][dim]){
    int i, j, k;
    for(i=0 ; i<dim ; i++){
        for(j=0 ; j<dim ; j++){
            C[i][j] = 0;
            for(k=0 ; k<dim ; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main(int *argc, int **argv){
    int dim;
    printf("Enter the dimention: ");
    scanf("%d",&dim);
    int A[dim][dim];
    int B[dim][dim];
    int C[dim][dim];
    int i, j;
    printf("\n\nEnter the numbers of the first matrice: \n\n");
    for(j=0 ; j<(dim*dim) ; j++){
        printf("Enter a number: ");
        scanf("%d",&A[0][j]);
    }
    printf("\n\nEnter the numbers of the second matrice: \n\n");
    for(j=0 ; j<(dim*dim) ; j++){
        printf("Enter a number: ");
        scanf("%d",&B[0][j]);   
    }
    multiply(dim,A,B,C);
    for(j=0 ; j<(dim*dim) ; j++)
        printf("%d ",C[0][j]);
    printf("\n");
}
