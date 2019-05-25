#ifndef LISTAS_ENCADEADAS_H
#define LISTAS_ENCADEADAS_H

typedef struct node {
  int info;
  struct node* next;
} Node;

// inicia um nó
Node* initialize_node();
// adiciona um nó no início
Node* add_node_at_start(Node* list, int number);
// adiciona um nó no fim
Node* add_node_at_end(Node* list, int number);
// remove o primeiro nó
Node* remove_node_at_start(Node* list);
// remove o último nó
Node* remove_node_at_end(Node* list);
// imprime a lista
void print_list(Node* list);



#endif
