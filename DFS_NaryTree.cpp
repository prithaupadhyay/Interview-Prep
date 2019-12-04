/*
DFS for a n-ary tree (acyclic graph) represented as adjacency array
Author: Pritha Upadhyay

Approach: 
N-ary tree is basically an acyclic graph. We used Vector for accessing this acyclic graph here. We created an array of vectors and stored all the node values connected to a node in a list.

Example Input: 
1 2
1 3
2 4
3 5

Tree Representation:
      1
     / \
   2    3
  /      \
4         5

Create array of vectors:
array[1]={2,3}
array[2]={1,4}
array[3]={1,5}
array[4]={2}
array[5]={3}

Output:
1
2
4
3
5

*/

#include <bits/stdc++.h> 
using namespace std; 

void dfs(vector<int> array[], int node, int arrivedFrom) 
{ 
	cout << node << '\n'; 

	for (int i = 0; i < array[node].size(); i++) { 
    //   cout<<"i: "<<i;
    //   cout<<"array[node].size():"<<array[node].size()<<endl;
    //   cout<<"array[node][i]:"<<array[node][i]<<endl;
    //   cout<<"arrivedFrom: "<<arrivedFrom<<endl;
		if (array[node][i] != arrivedFrom) 
			dfs(array, array[node][i], node); 
	} 
} 

int main() 
{ 
	int nodes = 5; 
	vector<int> array[10000]; 

	array[1].push_back(2); 
	array[1].push_back(3); 

    array[2].push_back(1); 
    array[2].push_back(4); 

	array[3].push_back(1); 
    array[3].push_back(5); 

	array[4].push_back(2); 

    array[5].push_back(3); 

	dfs(array, 1, 0); 

	return 0; 
} 