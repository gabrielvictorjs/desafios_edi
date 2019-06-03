#include <stdio.h>
#include <stdlib.h>
#include "listas_encadeadas.h"


Node* initialize_node() {
  Node* init = (Node*) malloc(sizeof(Node*));
  return init;
}


Node* insert_node_at_start(Node* list, int number) {
  Node* new_node = initialize_node();
  new_node->info = number;

  if (list == NULL) {
    list = new_node;
    new_node->next = NULL;
  } else {
    new_node->next = list;
    list = new_node;
  }

  return list;
}


Node* insert_node_at_end(Node* list, int number) {
  Node* new_node = initialize_node();
  new_node->info = number;

  if (list == NULL) {
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


Node* remove_node_at_start(Node* list) {
  if (list == NULL) { printf("\nLista vazia!\n"); return NULL; }
  Node* removed = list;
  list = removed->next;
  return list;
}


Node* remove_node_at_end(Node* list) {
  if (list == NULL) { printf("Lista vazia!\n"); return NULL; }
  Node* last = list->next;
  Node* penult = list;

  while(last->next != NULL) {
    penult = last;
    last = last->next;
  }

  penult->next = NULL;

  return list;

}

// imprime a lista
void print_list(Node* list) {
  if (list != NULL) {
    printf("Number: %d \n", list->info);
    print_list(list->next);
  }
}
