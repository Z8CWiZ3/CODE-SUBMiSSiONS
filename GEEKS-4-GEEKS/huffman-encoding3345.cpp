class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
class cmp
{
public:
    bool operator()(Node *a, Node *b)
    {
        return a->val > b->val;
    }
};
class Solution
{
public:
    void traverse(Node *root, vector<string> &ans, string tmp)
    {
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(tmp);
            return;
        }
        traverse(root->left, ans, tmp + '0');
        traverse(root->right, ans, tmp + '1');
    }
    vector<string> huffmanCodes(string S, vector<int> f, int N)
    {
        priority_queue<Node *, vector<Node *>, cmp> pq;
        for (int i = 0; i < N; i++)
        {
            Node *tmp = new Node(f[i]);
            pq.push(tmp);
        }
        while (pq.size() > 1)
        {
            Node *left = pq.top();
            pq.pop();
            Node *right = pq.top();
            pq.pop();
            Node *newNode = new Node(left->val + right->val);
            newNode->left = left;
            newNode->right = right;
            pq.push(newNode);
        }
        Node *root = pq.top();
        vector<string> ans;
        string tmp = "";
        traverse(root, ans, tmp);
        return ans;
    }
};
