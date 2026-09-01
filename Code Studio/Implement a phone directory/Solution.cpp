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

    void printSuggestions(TrieNode *curr, vector<string> &temp, string prefix)
    {
        if (curr->isTerminal)
        {
            temp.push_back(prefix);
        }

        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            TrieNode *next = curr->children[ch - 'a'];

            if (next != NULL)
            {
                prefix.push_back(ch);
                printSuggestions(next, temp, prefix);
                prefix.pop_back();
            }
        }
    }

    vector<vector<string>> getSuggestions(string queryStr)
    {
        TrieNode *prev = root;
        vector<vector<string>> output;
        string prefix = "";

        for (int i = 0; i < queryStr.size(); i++)
        {
            char ls = queryStr[i];
            prefix.push_back(ls);

            TrieNode *curr = prev->children[ls - 'a'];

            if (curr == NULL)
            {
                break;
            }

            vector<string> temp;
            printSuggestions(curr, temp, prefix);

            output.push_back(temp);
            temp.clear();
            prev = curr;
        }

        return output;
    }
};

vector<vector<string>> phoneDirectory(vector<string> &contactList, string &queryStr)
{
    Trie *root = new Trie('\0');

    for (int i = 0; i < contactList.size(); i++)
    {
        root->insert(contactList[i]);
    }

    return root->getSuggestions(queryStr);
}