#pragma once
#include <string>


class AVLTree {
private:
	int value;
	unsigned char height;
	AVLTree* left;
	AVLTree* right;
	
	void update(AVLTree* tree);
	unsigned char getHeight();
	int bfactor();
	void fixHeight();
	void rotateRight();
	void rotateLeft();
	void balance();
	AVLTree* findmin();
	AVLTree* removemin();
	bool remove(int v, bool helper);

public:
	AVLTree(int v);

	void insert(int v);
	bool find(int v);
	bool remove(int v); // true, если получилось удалить, иначе - false

	std::string getString();

	~AVLTree();
};