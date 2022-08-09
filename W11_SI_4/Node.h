#pragma once

class Node
{
	int val;
	Node* nodeLeft{ nullptr };
	Node* nodeRight{ nullptr };

public:
	Node(int initVal);
	int getVal();
	void setChildren(Node* child_ptr, char LeftorRight);

};

