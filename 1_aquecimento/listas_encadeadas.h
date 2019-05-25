#ifndef LISTAS_ENCADEADAS_H
#define LISTAS_ENCADEADAS_H

typedef struct node {
  int info;
  struct node* next;
} Node;

// inicia um n�
Node* initialize_node();
// adiciona um n� no in�cio
Node* add_node_at_start(Node* list, int number);
// adiciona um n� no fim
Node* add_node_at_end(Node* list, int number);
// remove o primeiro n�
Node* remove_node_at_start(Node* list);
// remove o �ltimo n�
Node* remove_node_at_end(Node* list);
// imprime a lista
void print_list(Node* list);



#endif
