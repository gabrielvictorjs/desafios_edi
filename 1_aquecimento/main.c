#include <stdio.h>
#include <stdlib.h>
#include "listas_encadeadas.h"

int main(int argc, char *argv[]) {
	
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
