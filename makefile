PreorderTraversal: preorder_traversal.o
	g++ -o PreorderTraversal preorder_traversal.o

preorder_traversal.o: preorder_traversal.cc
	g++ -c preorder_traversal.cc

clean:
	rm PreorderTraversal preorder_traversal.o
