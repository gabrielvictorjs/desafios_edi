#include <stdio.h>
#include <stdlib.h>

void check_plague(int pop[], int x, int y, int limiar) {
  if(x != y) {
    if(pop[x] >= limiar) printf("Z ");
    else printf("N ");
    check_plague(pop, x + 1, y, limiar);
  }
}

int main(int argc, char const *argv[]) {
  int limiar = 0, dim_x, dim_y, coor_x, coor_y, i, j;

  while(1) {
    printf("\nA Praga ZUMBI!!\n");
    scanf("%d", &limiar);
    if(limiar < 0) exit(1);
    scanf("%d %d", &dim_x, &dim_y);
    scanf("%d %d", &coor_x, &coor_y);

    int population[dim_x][dim_y];

    for(i = 0; i < dim_x; i++) {
      for(j = 0; j < dim_y; j++) {
        scanf("%d", &population[i][j]);
      }
    }

    printf("\n");

    for(i = 0; i < dim_x; i++) {
      check_plague(population[i], 0, dim_y, limiar);
      printf("\n");
    }
  }

  return 0;
}
