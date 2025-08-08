// Compile-time initialization => int m[4][3] = {{11}, {12, 13}, {14, 15, 16}, {17}};
// Run-time initialization => int m[4][3];
//                            Redaing values in m: for (int i = 0; i < 4; i++)  
//                                                      for (int j = 0; j < 3; j++)
//                                                          scanf("%d", &m[i][j]);
//                            Displaying values in m: for (int i = 0; i < 4; i++)  
//                                                      for (int j = 0; j < 3; j++)
//                                                          printf("%d", &m[i][j]);

#include<stdio.h>

// Compile-time initialization
// int main() {
//     int a[4][5] = {1,2,3,4,5,6,7,8,9},i,j;
//     for (i = 0; i < 4; i++) {
//         for (j = 0; j < 5; j++) {
//             printf("%3d", a[i][j]);
//         }
//         printf("\n");
//     }
// }

void display(int a[][10], int m, int n) {
    int i, j;
    printf("Displaying matrix: \n");
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

// Run-time initialization
int main() {
    int a[10][10],m,n,i,j;
    printf("Enter row and col size: \n");
    scanf("%d%d", &m, &n);
    printf("Enter %d elements: \n", m*n);
    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    display(a, m, n);
    // printf("Displaying matrix: \n");
    // for (i=0;i<m;i++) {
    //     for (j=0;j<n;j++) {
    //         printf("%4d", a[i][j]);
    //     }
    //     printf("\n");
    // }
}
