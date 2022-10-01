#include <iostream>

using namespace std;

const int ALPHABET_SIZE = 26;

class TrieNode {
public:
	TrieNode* children[ALPHABET_SIZE];
	bool isEndOfWord;
};

TrieNode* getNode(){
	TrieNode* pNode = new TrieNode();
	pNode->isEndOfWord = false;
	for (int i =0 ; i < ALPHABET_SIZE; ++i) {
		pNode->children[i] = NULL;
	}
	return pNode;
}

void insert(TrieNode* root, string key) {
	TrieNode* pCrawl = root;
	for (int i = 0; i < int(key.length()); ++i) {
		int index = key[i] - 'a';
		if (!pCrawl->children[index]) {
			pCrawl->children[index] = getNode();
		}
		pCrawl = pCrawl->children[index];
	}
	pCrawl->isEndOfWord = true;
}

bool search(TrieNode* root, string key) {
	TrieNode* pCrawl = root;
	for (int i =0; i< int(key.length()); ++i) {
		int index = key[i] - 'a';
		if (!pCrawl->children[index])
			return false;
		pCrawl = pCrawl->children[index];
	}
	return (pCrawl->isEndOfWord);
}

int main () {
	string keys[] = {"the", "this", "a", "an", "their"};
	int n = sizeof(keys)/sizeof(keys[0]);
	TrieNode* root = getNode();
	for (int i=0; i<n;++i) {
		insert(root, keys[i]);
	}
	char output[][32] = {"Not present in trie", "Present in trie"};
	cout << output[search(root, "the")];
	return 0;
}
