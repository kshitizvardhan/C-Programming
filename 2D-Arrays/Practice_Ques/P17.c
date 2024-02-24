// // WAP to print Wave-2

// #include <stdio.h>

// int main(){
//     int m,n;
//     printf("Enter the rows of 1st matrix: ");
//     scanf("%d",&m);
//     printf("Enter the columns of 1st matrix: ");
//     scanf("%d",&n);
//     int a[m][n];
//     for (int i=0; i<m; i++){
//         for (int j=0; j<n; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     // Input done
//     printf("\n");
//     for (int j = 0; j < n; j++) {
//         if (j % 2 == 0) { // even columns print normal order
//             for (int i = 0; i < m; i++) {
//                 printf("%d ", a[i][j]);
//             }
//             printf("\n");
//         } else { // odd columns print reverse order
//             for (int i = m - 1; i >= 0; i--) {
//                 printf("%d ", a[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     return 0;
// }