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

    bool checker(string pattern, TrieNode * root) 
	{
        if (pattern.length() == 0)
            return true;

        int k = pattern[0] - 'a';

        if (root -> children[k] != NULL)
            return (checker(pattern.substr(1), root -> children[k]));
        else
            return false;
    }

    bool helper(string pattern, TrieNode * root) 
	{
        if (root == NULL)
            return false;

        if (checker(pattern, root))
            return true;

        for (int i = 0; i < 26; i++) 
		{
            if (root -> children[i] != NULL) 
			{
                if (helper(pattern, root -> children[i]))
                    return true;
            }
        }

        return false;
    }

    bool patternMatching(vector < string > vect, string pattern) 
	{
        for (int i = 0; i < vect.size(); i++) 
		{
            insertWord(vect[i]);
        }

        bool ans = helper(pattern, root);
        return ans;
    }
};
