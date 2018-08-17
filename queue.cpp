#include <iostream>
#include <queue>
using namespace std;
void showq(queue <int> gq)
{
	queue <int> g = gq;
	while (!g.empty())
	{
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}
int main()
{
	queue <int> g1;
	for (int i =0 ;i <10 ;i++)
	{
		g1.push(i);
	}
	cout << "The Queue Elements are Here as Following:" << endl;
	showq(g1);
	cout << "Size of the Queue is '\t'" << g1.size() << endl;
	cout << "The First Element of the Queue is '\t'" << g1.front() << endl;
	cout << "The Last ELement of the queue is '\t'" << g1.back() << endl;
	cout << "Pop Elements from the queue '\t'" << endl;
	while (!g1.empty())
	{
		g1.pop();
		showq(g1);
	}
	
	system("Pause");
}