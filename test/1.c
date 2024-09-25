#include<stdio.h>
//7.1

//que-2
// 5
// 4 5
// 3 4 5
// 2 3 4 5
// 1 2 3 4 5
// int main()
// {
//     for (int row = 5; row >= 1 ; row --)
//     {
//         for (int col = row; col <= 5; col++)
//         {
//             printf("%d" ,col);
//         }
//         printf("\n");
//     }
    
// }

//que-5
// 1 1 1 1 1
// 2 2 2 2
// 3 3 3
// 4 4
// 5
// int main()
// {
//     for (int row = 5; row >= 1; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             printf("%d",row);
//         }
//         printf("\n");
//     }
// }

//que-6
// 1 0 1 0 1
// 1 0 1 0
// 1 0 1
// 1 0
// 1
// 

//que-7
//A
// B A
// C B A
// D C B A
// E D C B A
// int main()
// {
//     for (int row = 'A'; row <= 'E'; row++)
//     {
//         for (int col = row; col >= 'A' ; col--)
//         {
//             printf("%c" ,col);
//         }
//         printf("\n");
//     }
    
// }

//que-8
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// int main()
// {
//     int start = 0;
//     for (int row = 1; row <= 5; row++)
//     {
//         for (int col = 1; col <= row; col++)
//         {
//             start+1;
//             printf(" %d",col);
//         }
        
//     }
    
// }

//7.2
//que-2
//         5
//       4 5
//     3 4 5
//   2 3 4 5
// 1 2 3 4 5
// int main()
// {
//     for (int row = 5; row >= 1; row--)
//     {
//         for (int space = row; space > 1; space--)
//         {
//             printf(" ");
//         }
//         for (int col = row; col <= 5; col++)
//             {
//                 printf("%d",col);
//             }
//         printf("\n");
//     }
    
// }

//que-4
//1 0 1 0 1
//  0 1 0 1
//    1 0 1
//      0 1
//        1
// int main()
// {
//     for (int row = 1; row <= 5; row++)
//     {
//         for (int space = row; space > 1; space--)
//         {
//             printf(" ");
//         }
//         for (int col = row; col <= 5; col++)
//             {
//               if (col%2 !=0)
//              {
//                   printf("1");
//               }
//              else{
//                   printf("0");
//                  }
//             }
//             printf("\n");
//          }
    
// }

//que-10
//         1
//       1 2  1
//     1 2 3  2 1
//   1 2 3 4  3 2 1
// 1 2 3 4 5  4 3 2 1
// int main()
// {
//     for (int row = 1; row <= 5 ; row++)
//     {
//         for (int space = row; space <5 ; space++)
//         {
//             printf(" ");
//         }
//         for ( int col= 1 ; col <= row; col++)
//         {
//             printf("%d" ,col);
//         }
//         for ( int col= row-1 ; col >= 1; col--)
//         {
//             printf("%d" ,col);
//         }
//         printf("\n");
//     }
    
// }