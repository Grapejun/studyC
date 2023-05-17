#include <iostream>

class DLCList;

template <typename T>
class DLCListNode {
friend class DLCList;

public:
	DLCListNode() {

	}
private:
	T data;
	DLCListNode* left;
	DLCListNode* right;
};

class DLCList {
public:
	DLCList() {
		DLCListNode headerNode = new DLCListNode;

	}

	void Delete(DLCListNode* x);
	void Insert(DLCList* p, DLCList* x);

	class Iterator {
	private:
		DLCListNode* current;

	public:
		Iterator(DLCListNode* node = 0) : current(node) {}

		T& operator*() const { return current->data; }

	};

private:
	DLCListNode* first;
};

template <typename T>
void DLCList::Delete(DLCListNode* x)
{
	if (x == first) throw "Deletion of header node not permitted";
	else {
		x->left->right = x->right;
		x -> right->left = x->left;
		delete x;
	}
}

void DLCList::Insert(DLCList* p, DLCList* x)
{//노드 x 의 오른편에 노드 p를 삽입
	p->left = x; p->right = x->right;
	x->right->left = p; x->right = p;
}