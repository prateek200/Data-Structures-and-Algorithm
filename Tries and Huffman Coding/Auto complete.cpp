// #include "TrieNode.h"
#include <string>

#include <vector>

class TrieNode 
{
    public:
    char data;
    TrieNode ** children;
    bool isTerminal;

    TrieNode(char data) 
	{
        this -> data = data;
        children = new TrieNode * [26];
        
		for (int i = 0; i < 26; i++) 
		{
            children[i] = NULL;
        }
        
		isTerminal = false;
    }
};

class Trie 
{
    TrieNode * root;

    public:
    int count;

    Trie() 
	{
        this -> count = 0;
        root = new TrieNode('\0');
    }

    bool insertWord(TrieNode * root, string word) 
	{
        // Base case
        if (word.size() == 0) 
		{
            if (!root -> isTerminal) 
			{
                root -> isTerminal = true;
                return true;
            } 
			else 
			{
                return false;
            }
        }

        // Small Calculation
        int index = word[0] - 'a';
        TrieNode * child;
        
		if (root -> children[index] != NULL) 
		{
            child = root -> children[index];
        } 
		else 
		{
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }

        // Recursive call
        return insertWord(child, word.substr(1));
    }

    // For user
    void insertWord(string word) 
	{
        if (insertWord(root, word)) 
		{
            this -> count++;
        }
    }

    void print(TrieNode * root, string pattern) 
	{
        if (root == NULL)
            return;

        if (root -> isTerminal == true)
            cout << pattern << endl;

        for (int i = 0; i < 26; i++) 
		{
            char s = 'a' + i;

            print(root -> children[i], pattern + s);
        }
    }

    void search(TrieNode * root, string word, string pattern) 
	{
        if (word.length() == 0) 
		{
            print(root, pattern);
            return;
        }

        int k = word[0] - 'a';

        if (root -> children[k] == NULL)
            return;

        search(root -> children[k], word.substr(1), pattern);
    }

    void autoComplete(vector < string > input, string pattern) 
	{
        for (int i = 0; i < input.size(); i++)
            insertWord(input[i]);

        search(root, pattern, pattern);
    }

};
