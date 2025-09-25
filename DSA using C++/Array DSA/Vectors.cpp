#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>num;
    num.push_back(34);
    num.push_back(44);
    num.push_back(54);
    
    num.pop_back();

    
    cout<<"Vector size after:"<<num.size();
   cout<<num.front()<<endl;
   
    
}