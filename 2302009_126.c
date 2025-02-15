
// #include <stdio.h>
// int main(){
//     int N, K,  number[100]={0}, same=0;
//     long int sum=0;
//     scanf("%d %d", &N, &K);
//     for(int i=0; i<N; i++) {
//         scanf("%d", &number[i]);
//     }
//
//     for(int i = 1; i <= K; i++) {
//         same = 0;
//         for(int j = 0; j < N; j++) {
//             if(number[j] == i) {
//                 same++;
//             }
//         }
//         if(same <1) {
//             sum += i;
//         }
//
//     }
//     printf("%ld", sum);
//     return 0;
// }



#include <stdio.h>
int main(){
    int N, K,  number[10000000]={0}, exists[10000000]={0}, same=0;
    long int sum=0;
    scanf("%d %d", &N, &K);
    for(int i=0; i<N; i++) {
        scanf("%d", &number[i]);
        if (number[i] <= K) {
            exists[number[i]] = 1;
        }
    }
    sum = K*(K+1)/2;
    for (int i = 1; i <= K; i++) {
        if (exists[i]) {
            sum -= i;
        }
    }
    printf("%ld", sum);
    return 0;
}
