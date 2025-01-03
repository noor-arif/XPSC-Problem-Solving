//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int m = txt.size();
	    int k = pat.size();
	    vector<int> p(256, 0), t(256, 0);
	    for(int i=0; i<k; i++)
	    {
	        p[pat[i]]++;
	        t[txt[i]]++;
	    }
	    int cnt = 0;
	    if(p==t)
	        cnt++;
        int i = 0, j = k;
        while(j<m)
        {
            t[txt[j]]++;
            t[txt[i]]--;
            if(t==p)
                cnt++;
            i++, j++;
        }
	    return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends