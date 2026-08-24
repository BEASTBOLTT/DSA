

/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

class compare
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->data > b->data;
    }
};

Node *mergeKLists(vector<Node *> &listArray)
{
    priority_queue<Node *, vector<Node *>, compare> pq;

    int n = listArray.size();
    for (int i = 0; i < n; i++)
    {
        if (listArray[i] != NULL)
        {
            pq.push(listArray[i]);
        }
    }

    Node *head = NULL;
    Node *tail = NULL;

    while (!pq.empty())
    {
        Node *tmp = pq.top();
        pq.pop();
        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
            if (head->next != NULL)
            {
                pq.push(head->next);
            }
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
            if (tail->next != NULL)
            {
                pq.push(tail->next);
            }
        }
    }

    return head;
}
