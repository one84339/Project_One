#include <string>
#include <vector>
#include <iostream>
using namespace std;

class sol
{
    public:
    string longestCommonPrefix(vector<string>) ;
    string LPS(string, string);
};


    string longestCommonPrefix(vector<string>& strs) {


      string ans;
      ans = LPS(strs[0],strs[1]);
      for(int i= 2; i< strs.size(); i++)
      {

       ans = LPS(ans, strs[i]);
        if(ans == "")
          break;
      }

      return ans;


    }

  string LPS(string s1, string s2)
  {
      string lps  ="";
       int l = (s1.length() < s2.length()) ? s1.length() : s2.length();
      for(int i =0; i< l ;i++)
      {
             if(s1[i]==s2[i])
               lps = lps + s1[i];
             else
               break;
      }

    return lps;
  }

};


int main()
{
    vector<string> s;
    s = ["flower","flow","flight"];
    string fin =  string longestCommonPrefix(s);

    cout<<fin;
    return 0;
}

