#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    float rand_start=-0.5, rand_end=0.5, rand_val;
    srand(time(NULL));
    for (int i=1;i<=50;i++) {
        rand_val = (rand() % 101 - 50)/100.0;
        printf("%.2f\n", rand_val);
    }
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// #define N 50
// int main() {
//     int i;
//     char str;
//     FILE * fptr;
//
//     // Open a file for writing
//     fptr = fopen("rand.txt", "w");
//     if (fptr == NULL) {
//         printf("Error in creating output.dat\n");
//         return 0;
//     }
//
//     // Seed the random number generator
//     srand(time(NULL));
//
//     // Write the number of values to the file
//     fprintf(fptr, "%d\n", N);
//
//     // Generate and write random numbers to the file
//     for (i = 1; i <= N; i++) {
//         fprintf(fptr, "%0.4lf\n", (rand() % 2001 - 1000) / 2.e3);
//         printf("%d\n", (rand() % 2001 - 1000) / 2.e3);
//     }
//
//     // Close the file
//     fclose(fptr);
//
//     // Open the file for reading
//     fptr = fopen ("rand.txt", "r");
//     str = fgetc(fptr);
//
//     // Print the contents of the file
//     while (str != EOF)
//     {
//         printf ("%c", str);
//         str = fgetc(fptr);
//     }
//     printf ("%c", str);
//
//     // Close the file
//     // fclose(fptr);
//
//     return 0;
// }
