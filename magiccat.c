//magiccat.c
//Print the magic cat and your saying of choice
//Usage: magiccat saying_of_choice

//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//  
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//  MA 02110-1301, USA.  

#include <stdio.h>
#include <string.h>
#include "magiccat.h"

int main(int argc, char * argv[]) {
	printcat();

	//Check if the input contains the phrase "linux"	
	int containslinux = argvhaslinux(argc, argv);

	//If it does, Our Lord Stallman will interject
	if (containslinux) {
		interject();
	}
	//Otherwise, just print the user's input as usual
	else {
		int i;
		for (i = 1; i < argc; i++) {
			printf("%s%s", argv[i], " ");
		}
		printf("%s", "\n");
	}
return 0;
}

void printcat() {
	printf("　∧＿∧\n");
	printf("（｡･ω･｡)つ━☆・*。\n");
	printf("⊂　　 ノ 　　　・゜+.\n");
	printf("　しーＪ　　　°。+ *´¨)\n");
	printf("　　　　　　　　　.· ´¸.·*´¨) ¸.·*¨)\n");
	printf("　　　　　　　　　　(¸.·´ (¸.·’* ");
}

void interject() {
	printf ("I\'d just like to interject for a moment. What you\'re refering to as Linux, is in fact, GNU/Linux, or as I\'ve recently taken to calling it, GNU plus Linux. Linux is not an operating system unto itself, but rather another free component of a fully functioning GNU system made useful by the GNU corelibs, shell utilities and vital system components comprising a full OS as defined by POSIX.\n\tMany computer users run a modified version of the GNU system every day, without realizing it. Through a peculiar turn of events, the version of GNU which is widely used today is often called \"Linux\", and many of its users are not aware that it is basically the GNU system, developed by the GNU Project.\n\tThere really is a Linux, and these people are using it, but it is just a part of the system they use. Linux is the kernel: the program in the system that allocates the machine\'s resources to the other programs that you run. The kernel is an essential part of an operating system, but useless by itself; it can only function in the context of a complete operating system. Linux is normally used in combination with the GNU operating system: the whole system is basically GNU with Linux added, or GNU/Linux. All the so-called \"Linux\" distributions are really distributions of GNU/Linux.\n");
}

void tolowercase(char * in) {
	int i;
	for(i = 0; in[i]; i++) {
  		in[i] = tolower(in[i]);
	}
}

int argvhaslinux(int argc, char * argv[]) {
	int containslinux = 0; //True if input string contains substring "linux"
	char lowercasearg[6];

	int i;
	for (i = 1; i < argc; i++) {
		strncpy(lowercasearg, argv[i], sizeof(lowercasearg));
		lowercasearg[sizeof(lowercasearg) - 1] = '\0';
		tolowercase(lowercasearg);

		if (strstr(lowercasearg, "linux")) {
			containslinux = 1;
		}
		//If it contains "GNU/Linux", Our Lord Stallman need not be disturbed
		if (strstr(lowercasearg, "gnu/"))
			containslinux = 0;
	}

	return containslinux;
}
