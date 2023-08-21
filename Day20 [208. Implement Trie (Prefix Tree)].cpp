class Trie
{
    struct Node
    {
        bool isWord = false;
        vector<Node *> children{vector<Node *>(26, NULL)};
    } *Root, *curr;

public:
    Trie()
    {
        Root = new Node();
    }

    void insert(string word)
    {
        curr = Root;

        for (char &c : word)
        {
            if (!curr->children[c - 'a'])
                curr->children[c - 'a'] = new Node();

            curr = curr->children[c - 'a'];
        }
        curr->isWord = true;
    }

    bool search(string word)
    {
        curr = Root;
        for (char c : word)
        {
            if (!curr->children[c - 'a'])
                return false;

            curr = curr->children[c - 'a'];
        }
        if (curr->isWord)
            return true;
        return false;
    }

    bool startsWith(string prefix)
    {
        curr = Root;

        for (char c : prefix)
        {
            if (!curr->children[c - 'a'])
                return false;
            curr = curr->children[c - 'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */