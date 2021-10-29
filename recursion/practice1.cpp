#include <iostream>
#include <string>
using namespace std;

// void subseq(string s, string ans){
//     if (s.length()==0)
//     {
//         cout<<ans<<endl;
//         return;
//     }

//     char ch = s[0];
//     string ros=s.substr(1);

//     subseq(ros,ans);
//     subseq(ros,ans+ch);

// }

// Generate substring with ASCII number
// void subseq(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }

//     char ch = s[0];
//     int code = ch;
//     string ros = s.substr(1);

//     subseq(ros, ans);
//     subseq(ros, ans + ch);
//     subseq(ros, ans + to_string(code));
// }
// Print all posible words from Phone Digits
string keypadArr[]={" ","abc","def","gh","ijk","lmn","opq","rst","uvw","xyz"};
void keypad(string s, string ans){
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string code = keypadArr[ch-'0'];
    string ros=s.substr(1);


    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
    
    
};

int main()
{

    // subseq("ABC", "");
    keypad("23","");
    cout << endl;
    return 0;
}