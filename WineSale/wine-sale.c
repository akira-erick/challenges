#include<stdio.h>
#include<time.h>
#define MAX_WINES 1000

long long int brute_force_couter = 0;
long long int greedy_counter = 0;
long long int dynamic_programming_counter = 0;

int brute_force_rec(int wines[], int left, int right, int year) {
    brute_force_couter++;
    if (left == right) {
        return wines[left] * year;
    }

    int sell_left =
        wines[left] * year +
        brute_force_rec(wines, left + 1, right, year + 1);

    int sell_right =
        wines[right] * year +
        brute_force_rec(wines, left, right - 1, year + 1);

    return sell_left > sell_right ? sell_left : sell_right;
}

int brute_force(int wines[], int n) {
    return brute_force_rec(wines, 0, n - 1, 1);
}

int greedy(int wines[], int n) {

    int left = 0;
    int right = n - 1;
    int year = 1;
    int profit = 0;

    while (left <= right) {
        greedy_counter++;
        if (wines[left] <= wines[right]) {
            profit += wines[left] * year;
            left++;
        } else {
            profit += wines[right] * year;
            right--;
        }

        year++;
    }

    return profit;
}


int dynamic_programming_rec(int wines[], int n, int dp[n][n], int left, int right, int year) {
    dynamic_programming_counter++;
    if (dp[left][right] != -1) {
        return dp[left][right];
    }

    if (left == right) {
        dp[left][right] = wines[left] * year;
        return dp[left][right];
    }

    int sell_left =
        wines[left] * year +
        dynamic_programming_rec(
            wines, n, dp,
            left + 1, right, year + 1
        );

    int sell_right =
        wines[right] * year +
        dynamic_programming_rec(
            wines, n, dp,
            left, right - 1, year + 1
        );

    dp[left][right] =
        sell_left > sell_right ? sell_left : sell_right;

    return dp[left][right];
}


int dynamic_programming(int wines[], int n) {
    int dp[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dp[i][j] = -1;
        }
    }

    return dynamic_programming_rec(
        wines, n, dp,
        0, n - 1, 1
    );
}


int main() {
    
    //int wines[] = {2, 4, 6, 2, 5};
    int wines[] = {2, 4, 6, 2, 5, 7, 20, 4, 2, 7, 5, 8, 29, 41, 4, 1, 3, 5, 6, 9, 2, 4, 1, 3, 10, 2, 3, 1, 3, 10, 3};

    int n = sizeof(wines) / sizeof(wines[0]);

    for(int i = 0; i < n; i++){
        printf("%d ", wines[i]);
    }
    printf("\n");

    clock_t brute_force_start_time = clock();

    int answer_brute_force = brute_force(wines, n);

    clock_t brute_force_end_time = clock();
    double brute_force_cpu_time_used = ((double) (brute_force_end_time - brute_force_start_time)) / CLOCKS_PER_SEC;

    printf("Brute force duration: %f seconds\n", brute_force_cpu_time_used);

    printf("Brute force answer: %d\n", answer_brute_force);
    printf("Brute force iterations: %d\n", brute_force_couter);
    clock_t greedy_start_time = clock();

    int answer_greddy = greedy(wines, n);

    clock_t greedy_end_time = clock();
    double greedy_cpu_time_used = ((double) (greedy_end_time - greedy_start_time)) / CLOCKS_PER_SEC;

    printf("Greedy duration: %f seconds\n", greedy_cpu_time_used);

    printf("Greedy answer: %d\n", answer_greddy);
    printf("Greedy iterations: %d\n", greedy_counter);

    clock_t dynamic_programming_start_time = clock();

    int answer_dynamic_programming = dynamic_programming(wines, n);

    clock_t dynamic_programming_end_time = clock();
    double dynamic_programming_cpu_time_used = ((double) (dynamic_programming_end_time - dynamic_programming_start_time)) / CLOCKS_PER_SEC;

    printf("Dynamic Programming duration: %f seconds\n", dynamic_programming_cpu_time_used);

    printf("Dynamic Programming answer: %d\n", answer_dynamic_programming);
    printf("Dynamic Programming iterations: %d\n", dynamic_programming_counter);

    return 0;
}