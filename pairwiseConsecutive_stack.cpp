/*
Pairwise Consecutive Elements Problem
Author: Pritha Upadhyay

Approach: 
Here the aim was to check if the elements in the stack are pairwise consecutive or not.
We used recursion here to solve this problem. We first checked for the even or odd size of the stack. If the size is even, we an normally proceed with the check stack function where we store the pairwise values in temporary variables and check the absolute difference.
While in case of odd number of values, we first pop out a value and then call the same function.
*/
#include <iostream>
using namespace std;
bool pairWiseConsecutive(stack<int> s);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        stack<int> s;
        int n, tmp;
        cin>>n;
        while(n--){
            cin>>tmp;
	        s.push(tmp);
	    }
	    if (pairWiseConsecutive(s))cout << "Yes" << endl;
	    else cout << "No" << endl;
    }
	return 0;
}

/*This is a function problem.You only need to complete the function given below*/
//User function Template for C++
// your task is to complete the function
// function should return true/false or 1/0
// function should return true/false or 1/0
bool check(stack<int> s) 
{
    if(s.empty()) 
    {   return true;
    }
    
    int x=s.top();
    s.pop();
    int y=s.top();s.pop();
    if(abs(x-y)==1) 
    {
        return check(s);
    }
    else 
        return false;
}

bool pairWiseConsecutive(stack<int> s)
{
    int n=s.size();
    if(n%2==0) {
        return check(s);
    }
    else {
        s.pop();
        return check(s);
    }
}
