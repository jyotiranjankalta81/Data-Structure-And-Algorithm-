#include <iostream>
#include<string>
using namespace std;

// reverse a string
// void reverse(string s){
//     if (s.length()==0)
//     {
//         return;
//     }
//     string ros = s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }

// tower of hanoi
// void towerofHanoi(int n, char src, char dest, char helper){
//     if (n==0)
//     {
//         return;//base case
//     }
//     towerofHanoi(n-1, src,helper,dest);
//     cout<<" Move from "<< src <<" to "<<dest<<endl;
//     towerofHanoi(n-1,helper,dest,src);
// }

// remove all duplicate
// string removeDup(string s){
//     if (s.length()==0)
//     {
//         return " ";
//     }
//     char ch=s[0];
//     string ans = removeDup(s.substr(1));
//     if (ch==ans[0])
//     {
//         return ans;
//     }
//     return (ch+ans);
// }

// move all x to the end of the string
// string moveallX(string s)
// {
//     if (s.length() == 0)
//     {
//         return "";
//     }
//     char ch = s[0];
//     string ans = moveallX(s.substr(1));
//     if (ch == 'x')
//     {
//         return ans + ch;
//     }
// }

// generate all substring of a string
// void subseq(string s, string ans){
//     if (s.length()==0)
//     {
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     string ros= s.substr(1);
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
// }

// create substring with ASCII number
// void subseq(string s, string ans){
//     if (s.length()==0)
//     {
//         cout<<ans<<endl;
//         return;
//     }
//     char ch=s[0];
//     int code = ch;
//     string ros = s.substr(1);
//     subseq(ros,ans);
//     subseq(ros, ans+ ch);
//     subseq(ros, ans+ to_string(code));
// }

// Print all possible words from Phone digits
string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s, string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string code = keypadArr[ch-'0'];
    string ros = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
    

    
}


int main()
{
    // cout << moveallX("axxbdxcefxhix") << endl;
    // towerofHanoi(3,'A','C','B');

    // remove all duplicate
    // cout<<removeDup("aaaaaaaabbcccddeeerrfff")<<endl;

    // generate all substring of a string
    // subseq("ABC","");
    // cout<<endl;

    // create substring with ASCII number
    // subseq("AB","");


    // Print all possible words from Phone digits
    keypad("23","");





    return 0;
}