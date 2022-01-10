
// Umang Gupta
// 1 year ago
// // Online C++ compiler to run C++ program online
// #include <iostream>
// #include <cstring>
// using namespace std;

// int main() {
//     string str="aabaabaa";
//     string str2="aaba";

//     int N=str.size();
//     int k=str2.size();
//     int res=0, count=0;

//     for(int y=0;y<k;y++)
//     count=count+str2[y];

//     //cout<<"Words count in short string= "<<count<<endl;
//     int i=0,j;
//     for(j=0;j<k;j++)
//     {
//         count=count-str[j];
//     }
//     //cout<<"Words when hit window in long string= "<<count<<endl;

//     if(count==0)
//     res++;

//     for(;j<N;i++,j++)
//     {
//         count=count+str[j];
//         count=count-str[i];

//         if(count==0)
//         res++;

//     }
//     cout<<endl<<res;
//     return 0;
// }

// we can calculate the sum of ascii values of the given string and then we can compare that sum with every sliding window and update the counter..
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	string s;
// 	getline(cin,s);
// 	int n=s.size();
// 	string f;
// 	getline(cin,f);
// 	int count=0;
// 	for(int i=0;i<f.size();i++){
// 		count=count+f[i];
// 	}
// 	int j=0;
// 	int i=0;
// 	int sum=0;
// 	int k=0;
// 	while(j<n){
// 		sum=sum+s[j];
// 		if(j-i+1<f.size()){
// 			j++;
// 		}
// 		else if(j-i+1==f.size()){
// 			if(sum==count){
// 				k++;
// 			}
// 			j++;
// 			sum=sum-s[i];
// 			i++;
// 		}
// 	}
// 	cout<<k<<endl;
// }

// Harsh Tyagi
// 7 days ago
// //if you're doing this question on gfg just reverse the input parameters of the function
// int search(string pat, string txt) {
// 	    unordered_map<char,int> mp;
// 	    int anaCount=0;
// 	    for(int i=0;i<pat.length();i++)
// 	     mp[pat[i]]++;
// 	     int count=mp.size();
// 	     int j=0,i=0,k=pat.length();
// 	     int n=txt.length();
// 	     while(j<n)
// 	     {
// 	         if(mp.find(txt[j])!=mp.end())
// 	         {
// 	             mp[txt[j]]--;
// 	              if(mp[txt[j]]==0)
// 	               count--;
// 	         }

// 	         if((j-i+1)<k) j++;

// 	         else if((j-i+1) == k)
// 	         {
// 	             if(count==0)         anaCount++;

// 	             if(mp.find(txt[i])!=mp.end())
// 	             {
// 	                 mp[txt[i]]++;
// 	                 if( mp[txt[i]]==1)
// 	                 count++;
// 	             }
// 	               i++,j++;
// 	         }

// 	     }
// 	     return anaCount;
// 	}