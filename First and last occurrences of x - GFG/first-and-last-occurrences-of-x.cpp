//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int> v;
        if(arr[0]==x){
            v.push_back(0);
        }
        for(int i=1;i<n-1;i++){
            if(arr[i]==x && arr[i-1]!=x){
                v.push_back(i);
            }
            if(arr[i]==x && arr[i+1]!=x){
                v.push_back(i);
            }
        }
        if(arr[n-1]==x){
            v.push_back(n-1);
        }
        if(v.size()==0){
            v.push_back(-1);
            v.push_back(-1);
        }
        if(v.size()==1){
            v.push_back(v[0]);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends