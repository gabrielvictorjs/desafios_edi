#ifndef LISTAS_ENCADEADAS_H
#define LISTAS_ENCADEADAS_H

typedef struct node {
  int info;
  struct node* next;
} Node;


Node* initialize_node();

Node* add_node_at_start(Node* list, int number);

Node* add_node_at_end(Node* list, int number);

Node* remove_node_at_start(Node* list);

Node* remove_node_at_end(Node* list);

void print_list(Node* list);



#endif
