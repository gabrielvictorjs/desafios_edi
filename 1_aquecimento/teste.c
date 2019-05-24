#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int info;
  struct node* next;
} Node;

// retorna um nó inicial
Node* initialize_node() {
  Node* init = (Node*) malloc(sizeof(Node*));
  return init;
}

void print_list(Node* list) {
  if(list != NULL) {
    printf("Number: %d \n", list->info);
    print_list(list->next);
  }
}

Node* insert_node_at_start(Node* list, int number) {
  Node* new_node = initialize_node();
  new_node->info = number;

  if(list == NULL) {
    list = new_node;
    new_node->next = NULL;
  } else {
    new_node->next = list;
    list = new_node;
  }

  return list;
}

Node* remove_node_at_start(Node* list) {
  if(list == NULL) { printf("\nLista vazia!\n"); return NULL; }
  Node* removed = list;
  list = removed->next;
  return list;
}

Node* insert_node_at_end(Node* list, int number) {
  Node* new_node = initialize_node();
  new_node->info = number;

  if(list == NULL) {
    new_node->next = NULL;
    list = new_node;
  } else {
    Node* last = list;
    while(last->next != NULL) last = last->next;
    last->next = new_node;
    new_node->next = NULL;
  }

  return list;
}

Node* remove_node_at_end(Node* list) {
  if(list == NULL) { printf("Lista vazia!\n"); return NULL; }
  Node* last = list->next;
  Node* penult = list;

  while(last->next != NULL) {
    penult = last;
    last = last->next;
  }

  penult->next = NULL;

  return list;

}


int main(int argc, char const *argv[]) {

  Node* list = NULL;

  list = insert_node_at_start(list, 5);
  list = insert_node_at_start(list, 4);
  list = insert_node_at_start(list, 3);
  list = insert_node_at_start(list, 2);
  list = insert_node_at_end(list, 6);
  list = insert_node_at_start(list, 1);
  list = insert_node_at_end(list, 7);

  print_list(list);

  list = remove_node_at_start(list);
  list = remove_node_at_end(list);
  list = remove_node_at_end(list);
  
  printf("\n\n");
  print_list(list);

  return 0;
}
