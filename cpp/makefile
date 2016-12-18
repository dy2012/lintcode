all : PreorderTraversal InorderTraversal PostorderTraversal

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

PostorderTraversal: postorder_traversal.o
	$(CC) -o PostorderTraversal postorder_traversal.o

postorder_traversal.o: postorder_traversal.cc
	$(CC) -c postorder_traversal.cc --std=c++11

clean:
	rm -f PreorderTraversal preorder_traversal.o \
	      InorderTraversal inorder_traversal.o \
		  PostorderTraversal postorder_traversal.o
