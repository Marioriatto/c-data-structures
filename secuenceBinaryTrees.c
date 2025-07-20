typedef struct{
    int index, height, depth;
    node *parent = NULL;
    node *leftChild = NULL;
    node *rightChild = NULL;
}secuenceNode;

void insert_after(secuenceNode *node)
{
    secuenceNode newNode, *position = nextToInSecuence(&node, &node);
    if (position != NULL)
    {
        newNode.parent = position;
        position->rightChild = &newNode;
    }
    else
    {
        newNode.parent = node;
        node->rightChild = &newNode;
    }
    return;
}
secuenceNode nextToInSecuence(secuenceNode *node, secuenceNode *root)
{
    secuenceNode *currentNode;
    if (node->leftChild != NULL)
    {
        currentNode = nextToInSecuence(node->leftChild, root);
    }
    else if (node == root && node->rightChild != NULL) 
    {
        currentNode = node->rightChild;
    }
    else 
    { 
        currentNode = NULL;  
    }
    return currentNode;
}
