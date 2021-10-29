#include<iostream>
using namespace std;
#include<vector>
#include<stack>
vector<int>stockspan(vector<int>prices){
    vector<int>ans;
    // create a ppair stack
    stack<pair<int,int>>s;
    // iterate the all prices
    for(auto price: prices){
        // intial ya current stock price span is 1;
        int days = 1;
        // when stack is not empty & top element price is  smaller than current price
        // then add current element into the top element span
        while (!s.empty() && s.top().first<=price)
        {
            days+=s.top().second;
            s.pop();
        }
        // now push the result
        s.push({price,days});
        ans.push_back(days);
        
    }

    return ans;

}

int main(){
    vector<int>a={100,80,60,70,60,75,85};
    vector<int>res=stockspan(a);
    for (auto i: res)
    {
        cout<<i<<" ";
    }
    cout<<"\n";
    
}