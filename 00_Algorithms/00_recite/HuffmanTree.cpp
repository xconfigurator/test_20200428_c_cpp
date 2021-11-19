/*
Huffman树 （STL实现版本）
参考：课本P242 (课本例题错误很多)
@since 2017/12/8
@author liuyang
编译环境：Visual Studio 2017 Community
@update:
2017/12/8 2:30	第一版 初步完成 使用STL heap重构例题代码，编译通过，尚未功能测试。
2017/12/8 23:23 第二版 已经可以输出哈夫曼树 添加了拷贝构造函数， 添加了四种树的遍历，验证了哈夫曼树的结构！
2017/12/9 00:59 增加中序、前序遍历的非递归方法
*/
#include <iostream>
#include <vector>
//#include <algorithm>
#include <queue>
#include <stack>
using namespace std;

// 声明
struct HfmNode;
HfmNode* copyTree(HfmNode* root);


// 定义Huffman树节点
struct HfmNode {
	// 构造方法
	HfmNode() :left(NULL), right(NULL), parent(NULL) {}
	HfmNode(
		double elem,
		HfmNode* l = NULL, HfmNode* r = NULL, HfmNode* p = NULL
	) :data(elem), left(l), right(r), parent(p) {}

	HfmNode(const HfmNode& n) {// 复制构造方法，非常重要！书上例程没有给！
		// 发生拷贝的时候会希望拷贝其左子树和右子树的所有内容
		data = n.data;
		left = copyTree(n.left);
		right = copyTree(n.right);
	}

	// 运算符重载 (貌似没用)
	/*
	bool operator <=(HfmNode & R) { return data <= R.data; }
	bool operator >(HfmNode & R) { return data > R.data; }
	*/
	friend ostream& operator<<(ostream& out, const HfmNode& n) {
		out << n.data << "\t";
		return out;
	}

	// 数据成员
	double data;													// 节点数据
	HfmNode* left, * right, * parent;								// 左右孩子以及父节点（个人以为这个parent很多余！）
};


HfmNode* copyTree(HfmNode* root) {// 书上例程没有
	if (root == NULL) return NULL;
	HfmNode* n = new HfmNode();
	n->data = root->data;
	n->left = copyTree(root->left);
	n->right = copyTree(root->right);
	return n;
}

// 定义Huffman树
class HfmTree {
public:
	HfmTree(double w[], int n);
	//virtual ~HfmTree() { deleteTree(root); }						// 析构
	HfmNode* root;													// 树根
	HfmNode* mergeTree(HfmNode& t1, HfmNode& t2);					// 合并
	void deleteTree(HfmNode* t);									// 删除以t为根的子树
};

/*
构建最小堆使用的排序规则
*/
struct HfmNodeRuleForMinHeap {
	bool operator() (const HfmNode& n1, const HfmNode& n2) {
		return n1.data > n2.data;
	}
};

/*
给出n个权值w[1] ~ w[n], 构造Huffman树
*/
HfmTree::HfmTree(double w[], int n) {
	priority_queue<HfmNode, vector<HfmNode>, HfmNodeRuleForMinHeap> heap;	// heap.push(), heap.back(), heap.top()

	HfmNode* parent = NULL, first, second, work;

	for (int i = 0; i < n; i++) {									// 森林各树初始化
		work.data = w[i];
		work.left = NULL;
		work.right = NULL;
		work.parent = NULL;
		heap.push(work);
	}

	for (int i = 0; i < n - 1; i++) {								// 做n-1趟归并，形成Huffman树
		first = heap.top();											// 选择权值最小的树  // 这个时候调用复制构造函数！！！
		heap.pop();
		second = heap.top();										// 选择权值次小的树
		heap.pop();
		parent = mergeTree(first, second);							// 合并
		heap.push(*parent);											// 重新插入最小堆
	}

	//root = parent;												// ERROR!
	root = copyTree(parent);										// 建立根节点
}

HfmNode* HfmTree::mergeTree(HfmNode& t1, HfmNode& t2) {
	HfmNode* parent = new HfmNode();
	parent->left = &t1;
	parent->right = &t2;
	parent->data = t1.data + t2.data;
	t1.parent = t2.parent = parent;
	return parent;
}


// 遍历：先序 根 左 右
void traversePreOrder(HfmNode* node) {
	if (node == NULL) return;

	cout << *node << "\t";
	traversePreOrder(node->left);
	traversePreOrder(node->right);
}


// 遍历：中序 左 根 右
void traverseInOrder(HfmNode* node) {
	if (node == NULL) return;

	traverseInOrder(node->left);
	cout << *node << "\t";
	traverseInOrder(node->right);
}


// 遍历：后续 左 右 根
void traversePostOrder(HfmNode* node) {
	if (node == NULL) return;

	traversePostOrder(node->left);
	traversePostOrder(node->right);
	cout << *node << "\t";
}


// 遍历：层序（需要 STL queue）
void traverseLevelOrder(HfmNode* node) {
	if (node == NULL) return;

	queue<HfmNode*> q;
	q.push(node);

	HfmNode* n;
	while (!q.empty()) {
		n = q.front();
		q.pop();
		cout << *n << "\t";

		if (n->left != NULL) {
			q.push(n->left);
		}
		if (n->right != NULL) {
			q.push(n->right);
		}
	}

}

// 遍历：前序 非递归
void traversePreOrderNonRec(HfmNode* node) {
	if (node == NULL) return;

	HfmNode* n = node;
	stack<HfmNode*> s;
	while (n != NULL || !s.empty()) {
		while (n != NULL) {						// 一直想左并将沿途节点压入栈
			cout << *n << "\t";					// 先序遍历 访问节点位置
			s.push(n);
			n = n->left;
		}
		if (!s.empty()) {
			n = s.top();						// 出栈
			s.pop();
			//cout << *n << "\t";				// 中序遍历 访问节点位置
			n = n->right;						// 转向右子树
		}
	}
}


// 遍历：中序 非递归
void traverseInOrderNonRec(HfmNode* node) {
	if (node == NULL) return;

	HfmNode* n = node;
	stack<HfmNode*> s;
	while (n != NULL || !s.empty()) {
		while (n != NULL) {						// 一直想左并将沿途节点压入栈
			//cout << *n << "\t";				// 先序遍历 访问节点位置
			s.push(n);
			n = n->left;
		}
		if (!s.empty()) {
			n = s.top();						// 出栈
			s.pop();
			cout << *n << "\t";					// 中序遍历 访问节点位置
			n = n->right;						// 转向右子树
		}
	}

}



int main() {

	//double a[] = {0.05, 0.29, 007, 0.08, 0.14, 0.23, 0.03, 0.11};
	double a[] = { 1, 2, 3 };
	HfmTree* tree = new HfmTree(a, sizeof(a) / sizeof(a[0]));


	cout << "#PreOrder:" << endl;
	traversePreOrder(tree->root);
	cout << endl;
	cout << "#PreOrder（non rec）:" << endl;
	traversePreOrderNonRec(tree->root);
	cout << endl;

	cout << "#InOrder:" << endl;
	traverseInOrder(tree->root);
	cout << endl;
	cout << "#InOrder（non rec）:" << endl;
	traverseInOrderNonRec(tree->root);
	cout << endl;


	cout << "#PostOrder:" << endl;
	traversePostOrder(tree->root);
	cout << endl;

	cout << "#LevelOrder:" << endl;
	traverseLevelOrder(tree->root);
	cout << endl;

	return 0;
}