// #include <iostream>
#include <string>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     // string s1 = "KaLta";



//     // convert into upper case
//     // for (int i = 0; i < s1.size(); i++)
//     // {
//     //     if (s1[i] >= 'a' && s1[i] <= 'z')
//     //     {
//     //         s1[i] -= 32;
//     //     }
//     // }
//     // cout << s1 << endl;



//     // // convert to lowercase
//     // for (int i = 0; i < s1.size(); i++)
//     // {
//     //     if (s1[i] >= 'A' && s1[i] <= 'Z')
//     //     {
//     //         s1[i] += 32;
//     //     }
//     // }
//     // cout << s1 << endl;


// string to upper & lower case
//     // transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
//     // cout<<s1<<endl;
//     // transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
//     // cout<<s1<<endl;



// makeing the grestest numer in the integr string
//     // string s = "5043950438";
//     // sort(s.begin(), s.end(), greater<int>());
//     // cout<<s<<endl;



// which char present more time ia the string
//     string s =" fkdkjnfkdsidnreilkanvjfd";
//     int freq[26];
//     for (int i = 0; i < 26; i++)
//     {
//         freq[i]=0;
//     }
//     for (int i = 0; i <s.size(); i++)
//     {
//         freq[s[i]-'a']++;
//     }
//     char ans = 'a';
//     int maxF = 0;    
//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i] > maxF)
//         {
//             maxF = freq[i];
//             ans = i+'a';
//         }
        
//     }
//     cout<<maxF <<" "<<ans<<endl;
//     return 0;
// }




#include <iostream>
using namespace std;

void lower_string(string str)
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')    //checking for uppercase characters
			str[i] = str[i] + 32;         //converting uppercase to lowercase
	}
	cout<<"\n The string in lower case: "<< str;
}

void upper_string(string str) 
{
	for(int i=0;str[i]!='\0';i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')   //checking for lowercase characters
			str[i] = str[i] - 32;        //converting lowercase to uppercase
	}
	cout<<"\n The string in upper case: "<< str;
}

int main()
{
	string str;
    cout<<"Enter the string ";
    getline(cin,str);
    lower_string(str);       //function call to convert to lowercase
	upper_string(str);   //function call to convert to uppercase
	return 0;
}