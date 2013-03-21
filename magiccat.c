//magiccat.c
//Print the magic cat and your saying of choice
//Usage: magiccat saying_of_choice
#include <stdio.h>
#include <string.h>

void printcat() {
	printf("　∧＿∧\n");
	printf("（｡･ω･｡)つ━☆・*。\n");
	printf("⊂　　 ノ 　　　・゜+.\n");
	printf("　しーＪ　　　°。+ *´¨)\n");
	printf("　　　　　　　　　.· ´¸.·*´¨) ¸.·*¨)\n");
	printf("　　　　　　　　　　(¸.·´ (¸.·’* ");
}

int main(int argc, char *argv[]) {
	printcat();
	//Print arguments
	int i;
	for (i = 1; i < argc; i++) {
		printf("%s%s", argv[i], " ");
	}
	printf("%s", "\n");
return 0;
}
