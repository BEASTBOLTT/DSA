#include <bits/stdc++.h>

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    int childCount;
    bool isTerminal;

    TrieNode(char ch)
    {
        this->data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        childCount = 0;
        isTerminal = false;
    }
};

class Trie
{

public:
    TrieNode *root;

    /** Initialize your data structure here. */
    Trie(char ch)
    {
        root = new TrieNode(ch);
    }

    void insertWord(TrieNode *root, string word)
    {
        if (word.size() == 0)
        {
            root->isTerminal = true;
            return;
        }

        int index = word[0] - 'a';

        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->childCount++;
            root->children[index] = child;
        }

        insertWord(child, word.substr(1));
    }

    /** Inserts a word into the trie. */
    void insert(string word)
    {
        insertWord(root, word);
    }

    void findLCP(string word, string &ans)
    {
        for (int i = 0; i < word.size(); i++)
        {

            char ch = word[i];

            if (root->childCount == 1)
            {
                int index = ch - 'a';
                ans.push_back(ch);
                root = root->children[index];
            }
            else
            {
                break;
            }

            if (root->isTerminal == true)
            {
                break;
            }
        }
    }
};

string longestCommonPrefix(vector<string> &arr, int n)
{
    Trie *root = new Trie('\0');

    for (int i = 0; i < n; i++)
    {
        root->insert(arr[i]);
    }

    string ans = "";
    string first = arr[0];

    root->findLCP(first, ans);

    return ans;
}
