all : PreorderTraversal InorderTraversal

CC = g++

CFLAGS = -O -Wall -ansi

PreorderTraversal: preorder_traversal.o
	$(CC) -o PreorderTraversal preorder_traversal.o

preorder_traversal.o: preorder_traversal.cc
	$(CC) -c preorder_traversal.cc

InorderTraversal: inorder_traversal.o
	$(CC) -o InorderTraversal inorder_traversal.o

inorder_traversal.o: inorder_traversal.cc
	$(CC) -c inorder_traversal.cc --std=c++11

clean:
	rm -f PreorderTraversal preorder_traversal.o \
	      InorderTraversal inorder_traversal.o
