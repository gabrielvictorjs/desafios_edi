#include <stdio.h>

int N_QUEUE, N_REMOVE;

void dequeue(int queue[], int size, int position) {
	int i;
	for (i = position; i < size - 1; i++)
		queue[i] = queue[i + 1];

	queue[i] = 0;
}

int search(int queue[], int size, int key) {
	int i;
	for (i = 0; i < size; i++)
		if (queue[i] == key) return i;

	return -1;
}

int is_repeated(int q[], int size) {
	int i, aux = q[0], p = 0;
	for(i = 0; i < size; i++) {
		if(p == i) continue;
		else {
			if(aux == q[i]) return 1;
			aux = q[i];
			p = i;
		}
	}
	return 0;
}

void handle_queue(int removed[], int queue[]) {
	int i, position, aux = N_REMOVE;
	for(i = 0; i < aux; i++) {
		position = search(queue, N_QUEUE, removed[i]);
		if(position == -1) N_REMOVE--;
		else dequeue(queue, N_QUEUE, position);
	}

	for(i = 0; i < N_QUEUE - N_REMOVE; i++)
		printf("%d ", queue[i]);
}

int main() {

	int i;

	while(1) {
		printf("\nFila de banco!");
		printf("\nQuantos entraram?\n");
		scanf("%d", &N_QUEUE);
		if(N_QUEUE == 0) break;

		int queue_pass[N_QUEUE];

		do {
		  if(is_repeated(queue_pass, N_QUEUE))
				printf("Senhas de entrada repetidas!\n");

			printf("Quem entrou?\n");
			for(i = 0; i < N_QUEUE; i++)
				scanf("%d", &queue_pass[i]);

		} while(is_repeated(queue_pass, N_QUEUE));

		printf("Quantos sairam?\n");
		scanf("%d", &N_REMOVE);
		int pass_removed[N_REMOVE];


			printf("Quem saiu?\n");
			for(i = 0; i < N_REMOVE; i++)
				scanf("%d", &pass_removed[i]);



		printf("\nSaida:\n");
		handle_queue(pass_removed, queue_pass);

		printf("\n");
	}

	printf("\nFIM DO PROGRAMA!\n");


	return 0;
}
