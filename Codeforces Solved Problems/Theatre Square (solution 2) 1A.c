#include <stdio.h>
 
int main() {
    long long int n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
 
    if (n < 1 || m < 1 || a < 1 || a > 1000000000 || m > 1000000000 || n > 1000000000)
        return 0;
 
    // Calculate the number of tiles needed for each dimension
    long long int tiles_along_n = (n + a - 1) / a;  // This rounds up n/a
    long long int tiles_along_m = (m + a - 1) / a;  // This rounds up m/a
 
    // Total tiles required is the product of tiles needed along each dimension
    long long int total_tiles = tiles_along_n * tiles_along_m;
    printf("%lld", total_tiles);
 
    return 0;
}
