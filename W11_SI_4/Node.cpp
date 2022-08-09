#include "Node.h"

Node::Node(int initVal)
{
	val = initVal;
}

int Node::getVal()
{
	return val;
}

void Node::setChildren(Node* child_ptr, char LeftorRight)
{
	if (LeftorRight == 'L')
		nodeLeft = child_ptr;
	else
		nodeRight = child_ptr;
}
