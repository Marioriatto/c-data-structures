typedef struct{
    int index, height, depth;
    node *leftChild = NULL;
    node *rightChild = NULL;
}secuenceNode;

void insertAfter(int index, secuenceNode *root)
{
    secuenceNode *node = binarySearch(index, root);
    secuenceNode newNode, *position = nextToInSecuence(node, node);
    if (position != NULL)
    {
        position->rightChild = &newNode;
    }
    else
    {
        node->rightChild = &newNode;
    }
    return;
}
secuenceNode binarySearch(int index, secuenceNode *root)
{
    secuenceNode *currentNode = root;
    while(currentNode->leftChild != NULL || currentNode->rightChild != NULL)
    {
        if (currentNode->index == index)
        {
            return currentNode;
        }
        else if (currentNode->index > index)
        {
            currentNode = currentNode->leftChild;
        }
        else if (currentNode->index < index)
        {
            currentNode = currentNode->rightChild;
        }
    }
    return currentNode;
}
secuenceNode nextToInSecuence(secuenceNode *node, secuenceNode *initial)
{
    secuenceNode *currentNode;
    if (node->leftChild != NULL)
    {
        currentNode = nextToInSecuence(node->leftChild, initial);
    }
    else if (node == initial && node->rightChild != NULL) 
    {
        currentNode = node->rightChild;
    }
    else 
    { 
        currentNode = NULL;  
    }
    return currentNode;
}
