// Copyright [2022] <cofffecup>
#include <stdio.h>

int main() {
    int N, M;
    scanf("%d%d", &N, &M);
    int mat[N][M];
    int number = 1;

    for (int i = 0; i <= N / 2; i++) {
        for (int x = i; x < M - i; x++) {
            if (number <= N * M) {
            mat[i][x] =  number++;
            }
        }

        for (int y = 1 + i; y < N - 1 - i; y++) {
            if (number <= N * M) {
            mat[y][M - 1 - i] = number++;
            }
        }

        for (int x = i; x < M - i; x++) {
            if (number <= N * M) {
            mat[N - 1 - i][M - 1 - x] = number++;
            }
        }

        for (int y = 1 + i; y < N - 1 - i; y++) {
            if (number <= N * M) {
                mat[N - 1 - y][i] = number++;
            }
        }
    }

    for (int y = 0; y < N; y++) {
        for (int x = 0; x < M; x++) {
            printf("%3d", mat[y][x]);
        }
        printf("\n");
    }
    return 0;
}
