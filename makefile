all: linklist.c
	gcc -o my_linked_list linklist.c
clean:
	rm *~
run: all
	./my_linked_list
