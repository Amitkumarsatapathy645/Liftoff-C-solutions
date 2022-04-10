#include<stdio.h>
int main(){
    int matr1[2][2]= {
        {2,3},
        {5,6}
    };
    int matr2[2][2]= {
        {7,8},
        {4,8}
    };
    // two matrices initialised
    //Addition:
    int matrR[2][2];
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            matrR[i][j] = matr1[i][j] + matr2[i][j];

        }
    }
    printf("SUM:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", matrR[i][j]);
        }
        printf("\n");
    }
   // Multiplication:
    matrR[0][0] = matr1[0][0]*matr2[0][0] + matr1[0][1]*matr2[1][0];
    matrR[0][1] = matr1[0][0]*matr2[0][1] + matr1[0][1]*matr2[1][1];
    matrR[1][0] = matr1[1][0]*matr2[0][0] + matr1[1][1]*matr2[1][0];
    matrR[1][1] = matr1[1][0]*matr2[0][1] + matr1[1][1]*matr2[1][1];   
    printf("PRODUCT:\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ", matrR[i][j]);
        }
        printf("\n");
    }                                  
}