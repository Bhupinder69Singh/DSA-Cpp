//c++ stl 
/*
//vector
#include<iostream>
#include<vector>//vector is a dynamic array
using namespace std;
int main(){
    vector<int> v;
    cout<<"size--->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size--->"<<v.capacity()<<endl;
    v.push_back(5);
    v.push_back(26);
    cout<<"element at 2nd index "<<v.at(2)<<endl;
    cout<<"front: "<<v.front()<<endl;
    cout<<"back: "<<v.back()<<endl;
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.clear();
    cout<<"Vector cleared"<<endl;
     for(int i:v){
        cout<<i<<" ";
    }
    cout<<"size after clearing:"<<v.size()<<endl;
    }*/
/*
//deque
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(5);
    dq.push_front(2);
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;
    dq.pop_back();
    for(int i:dq){
        cout<<i<<" ";
    }
   cout<<endl;
    dq.push_back(78);
    cout<<"front:"<<dq.front()<<endl;
    cout<<"back:"<<dq.back()<<endl;
    cout<<"Empty or not:"<<dq.empty()<<endl;
    dq.erase(dq.begin(),dq.begin()+1);
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;

    
    dq.clear();
    cout<<"Empty or not:"<<dq.empty()<<endl;


}*/
/*
//list
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    l.push_back(5);
    l.push_front(1);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erasing 1st elemnt"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list "<<l.size()<<endl;
    list<int> nl(5,100);//here 5 represents size of array,100represent the number with which you initialize all elements in list
    for(int j:nl){
        cout<<j<<" ";
    }


}*/
/*
//stack
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;
    s.push("hello");
    s.push("new");
    s.push("world");
    cout<<"top element ---> "<<s.top()<<endl;
    s.pop();
    cout<<"top element ---> "<<s.top()<<endl;
    cout<<"size of stack "<<s.size()<<endl;
    cout<<"is empty or not"<<s.empty()<<endl;
}*/
/*
//queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("hi");
    q.push("chief");
    q.push("valorant");
    cout<<"1st element-->"<<q.front()<<endl;
    cout<<"last element-->"<<q.back()<<endl;
    cout<<"size of queue(before pop)"<<q.size()<<endl;
    q.pop();
    cout<<"1st element after pop-->"<<q.front()<<endl;
    cout<<"size of queue(after pop)"<<q.size()<<endl;    
}
*/
/*
//set
#include<iostream>
#include<set>
//in set each element is unique i.e if 5 is entered 3 times it will only be inserted once
//set will be returned in sorted order  
using namespace std;
int main(){
  set<int> s;
  s.insert(5);
  s.insert(5);
  s.insert(2);
  s.insert(2);
  s.insert(1);
  s.insert(1);
  s.insert(9);
  for(int i:s){
    cout<<i<<" ";
  }
  cout<<endl;
  s.erase(s.begin());
  for(int i:s){
    cout<<i<<" ";
  } 
  cout<<endl;
  cout<<"is 5 present or not "<<s.count(5)<<endl;//count checks if the element is present or not
 
}*/
/*
#include<iostream>
#include<map>
//map is data structure in which elements are stored in key value pairs
using namespace std;
int main(){
    map<int,string> m;
    m[1]="horn";
    m[3]="please";
    m[2]="ok";
    m.insert({5,"world"});
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"finding 13--->"<<m.count(13)<<endl;
    m.erase(3);
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
}*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(10);
    v.push_back(17);
    cout<<binary_search(v.begin(),v.end(),5)<<endl;

    int a=78;
    int b=8;
    cout<<"max="<<max(a,b)<<endl;
    cout<<"min="<<min(a,b)<<endl;
    cout<<"a--->"<<a<<endl;
    //----------------------------
    swap(a,b);
    cout<<"a--->"<<a<<endl;
    //-----------------------------
    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"after sort"<<endl;
    //----------------------------
    sort(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }
    //----------------------------
    cout<<endl;
    cout<<"after reverse"<<endl;
    reverse(v.begin(),v.end());
    for(int i:v){
        cout<<i<<" ";
    }

}
