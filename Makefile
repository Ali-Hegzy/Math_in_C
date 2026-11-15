make : main.c
	gcc main.c src/MConst.c src/equations.c -o  main -lm 