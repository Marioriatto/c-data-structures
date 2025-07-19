typedef struct{
    int index, height, depth;
    node *parent = NULL;
    node *leftChild = NULL;
    node *rightChild = NULL;
}secuenceNode;

void insert_after(secuenceNode *node)
{
    secuenceNode newNode;
    newNode.parent = (node->rightChild != NULL) ? nextToInSecuence(&node, &node)->leftChild : node;
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
        currentNode = 
node->rightChild;
    }
    return currentNode;
}
