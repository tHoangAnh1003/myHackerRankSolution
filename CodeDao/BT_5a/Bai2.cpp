struct Node {
    int value;
    Node* next;
};

Node* insertTail(Node* head, int value) {
    Node* newNode = new Node();
    newNode->value = value;
    newNode->next = NULL;
    
    if (head == NULL)
        return newNode;
    
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    return head;
}