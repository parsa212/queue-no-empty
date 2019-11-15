#include <iostream>

using namespace std;
class queue {
public:
	int front = 1;
	int rear = 1;
	int c = 0;
	int n;
	int *arr;
    queue(int n){
		arr = new int[n];
		this->n= n;
	}
	void add(int x){
		if(c==n){
			cout<<"queue is full\n";
			return;
		}
		arr[rear] = x;
		cout<<x<<" added\n";
		rear++;
		c++;
	}
	
	int del(){
		if(c==0){
			cout<<"queue is empty\n";
			return 0;
		}
		front++;
		c--;
		return arr[front-1];
	}
};

int main(int argc, char** argv) {
	queue q(3);
	q.add(2);
	q.add(3);
	q.add(4);
	cout<<q.del()<<" deleted\n";
	q.add(5);
	cout<<q.del()<<" deleted\n";
	q.add(6);
	cout<<q.del()<<" deleted\n";
	q.add(7);
	cout<<q.del()<<" deleted\n";
	cout<<q.del()<<" deleted\n";
	cout<<q.del()<<" deleted\n";
 	return 0;
}


