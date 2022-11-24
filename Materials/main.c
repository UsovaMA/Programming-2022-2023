#include <stdio.h>
#include <malloc.h>
#define N 25

struct Product {
  char name[100];
  float cost;
  int count;
  int ID;
};

void print(struct Product tovar) {
  printf("Name: %s\n", tovar.name);
  printf("Price: %.2f\n", tovar.cost);
  printf("Count: %d\n", tovar.count);
}

void addInStock(struct Product* stock, int stockSize,
  int* stockcount, struct Product tovar) {
  if (stockSize == (*stockcount)) {

  }
  strcpy(stock[*stockcount].name, tovar.name);
  stock[*stockcount].cost = tovar.cost;
  stock[*stockcount].count = tovar.count;
  stock[*stockcount].ID = tovar.ID;
  (*stockcount)++;
}

int main() {
  struct Product* stock = (struct Product*)malloc(sizeof(struct Product) * N);
  int stockSize = N, stockcount = 0;
  struct Product** basket = (struct Product**)malloc(sizeof(struct Product) * N);
  int basketSize = N, basketcount = 0;

  struct Product tovar1, tovar2;
  tovar1.ID = 100001; strcpy(tovar1.name, "Butter Derevenka"); tovar1.cost = 132.00; tovar1.count = 25;
  tovar2.ID = 100002; strcpy(tovar2.name, "Milk Derevenka"); tovar2.cost = 67.50; tovar2.count = 40;
  addInStock(stock, stockSize, &stockcount, tovar1);
  addInStock(stock, stockSize, &stockcount, tovar2);
  for (int i = 0; i < stockcount; i++) { print(stock[i]); printf("\n"); }

  return 0;
}