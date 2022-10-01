#include <iostream>
#include <queue>

using namespace std;

void printQueue(queue<int> q) {
	queue<int> temp = q;
	while (!temp.empty()) {
		cout << temp.front() << " ";
		temp.pop();
	}
	cout << endl;
}

int main() {
	queue <int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	cout << q.size() << endl;
	cout << q.front() << endl;
	cout << q.back() << endl;
	printQueue(q);
	return 0;
}
