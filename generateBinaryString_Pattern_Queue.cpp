/*
Given a string containing of ‘0’, ‘1’ and ‘?’ wildcard characters, generate all binary strings that can be formed by replacing each wildcard character by ‘0’ or ‘1’.

Author: Pritha Upadhyay

Example:
Input str = "1??0?101"
Output: 
        10000101
        10001101
        10100101
        10101101
        11000101
        11001101
        11100101
        11101101

Approach: 
Here we used Iterative approach using queue.
We find position of first occurrence of wildcard character in the input string and replace it by ‘0’ , then ‘1’ and push both strings into the queue. Then we pop next string from the queue, and repeat the process till queue is empty. If no wildcard characters are left, we simply print the string.
*/

#include <iostream> 
#include <queue> 
using namespace std; 
  
void print(string str) 
{ 
    queue<string> q; 
    q.push(str); 
  
    while (!q.empty()) 
    { 
        string str = q.front(); 
  
        // find position of first occurrence of wildcard 
        size_t index = str.find('?'); 
  
        // If no matches were found, 
        // find returns string::npos 
        if(index != string::npos) 
        { 
            // replace '?' by '0' and push string into queue 
            str[index] = '0'; 
            q.push(str); 
  
            // replace '?' by '1' and push string into queue 
            str[index] = '1'; 
            q.push(str); 
        } 
  
        else
            // If no wildcard characters are left, 
            // print the string. 
            cout << str << endl; 
  
        q.pop(); 
    } 
} 
  
int main() 
{ 
    string str = "1??0?101"; 
  
    print(str); 
  
    return 0; 
} 