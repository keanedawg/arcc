using namespace std;

#include <vector>
#include <string>

class Node
{
public:
	Node();
	~Node();

<<<<<<< HEAD
	bool operator<(const node& rhs) { return name < rhs.name; }
	bool operator>(const node& rhs) { return name > rhs.name; }

	void addConnection(Node n);
	bool isConnected(Node n);

	String name;
	Vector<int> weights;
	Vector<node*> connects;
=======
	bool operator<(const Node& rhs) { return name < rhs.name; }
	bool operator>(const Node& rhs) { return name > rhs.name; }

	void addConnection(Node *n, int w);
	bool isConnected(Node *n);

	//node identifier
	string name;
	//for calculating path
	int fCost;
	int gCost;

	vector<int> weights;
	vector<Node*> connects;
>>>>>>> 585f73e7ba2fefd8d79a64ad59f5381ebbb481ee
private:
	bool isVisited; // maybe unnecessary, but toggled true if already visited.
};


// n is the node to add, w is the weight between the two nodes
void Node::addConnection(Node *n, int w) {
	// First, connect this node to n.
	connects.push_back(n);
	weights.push_back(w);
	// Then, connect the n node to this node.
	n->connects.push_back(this);
	n->weights.push_back(w);
}

bool Node::isConnected(Node *n) {
	for (int i = 0; i < connects.size(); i++) {
		if (n == connects[i])
			return true;
	}
	return false;
}


Node::Node() {
	connects.push_back(n);
}


Node::~Node()
{
}