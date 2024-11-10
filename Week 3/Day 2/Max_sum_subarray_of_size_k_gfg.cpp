// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// class Solution {
//   public:
//     long long maximumSumSubarray(vector<int>& arr, int k) {
//         // code here
//         int j=0;
//         long long ans = -1;
//         while(j<=arr.size()-k)
//         {
//             long long sum = 0;
//             int l = j;
//             for(int i=1; i<=k; i++)
//             {
//                 sum += arr[l];
//                 l++;
//             }
//             ans = max(ans, sum);
//             j++;
//         }
//         return ans;
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     string ts;
//     getline(cin, ts);
//     int t = stoi(ts);
//     while (t--) {

//         vector<int> arr;
//         string input;
//         getline(cin, input);
//         stringstream ss(input);
//         int number;
//         while (ss >> number) {
//             arr.push_back(number);
//         }
//         string ks;
//         getline(cin, ks);
//         int k = stoi(ks);
//         Solution ob;
//         long long ans = ob.maximumSumSubarray(arr, k);
//         cout << ans << "\n";
//         cout << "~" << endl;
//     }
//     return 0;
// }
// // } Driver Code Ends

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long maximumSumSubarray(vector<int> &arr, int k)
    {
        // code here
        int n = arr.size(), l = 0, r = 0;
        long long ans = 0, sum = 0;
        while (r < n)
        {
            sum += arr[r];
            if (r - l + 1 == k)
            {
                ans = max(ans, sum);
                sum -= arr[l];
                l++;
            }
            r++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--)
    {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        long long ans = ob.maximumSumSubarray(arr, k);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends