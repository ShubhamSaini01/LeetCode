// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        cout<<" k = "<<k<<endl;
        int min= arr1[0]<arr2[0];
        int i =0 ,j =0,l=0;
        int arrFinal[n+m];
        while(i<n || j<m){
            if(i >-1 && arr1[i]<=arr2[j]){
                k--;
                arrFinal[l++]=arr1[i++];
                // i++;
                
            }
            else if(j >-1 && arr1[i]>arr2[j]){
                 k--;
                arrFinal[l++]=arr2[j++];
                // j++;
            }
            else{
                cout<<"arr1[i]"<<arr1[i]<<"arr2[j]"<<arr2[j]<<" here"<<endl;
            }
            if(k == 0) break;

        }
         cout<<"m+n = "<<m+n<<"l = "<<l<<"     \n";
         cout<<"i = "<<i<<"j = "<<j<<"     \n";
         for(int i=0; i<=l; i++)
             cout<<arrFinal[i]<<" ";
         cout<<"\nbbb";
        return arrFinal[l-1];
        // for(int i=0; i<n; i++){
        //     for(int j=0;j<m; j++){
        //         if(arr1[i]<arr[2]){
        //             k--
        //         }
        //     }
            
            
        // }
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
//	int t;
//	cin>>t;
//	while(t--){
		int n=4,m=97,k=98;
		//cin>>n>>m>>k;
		//cout<<m<<" "<<n<<" "<<k;
        int arr1[n]={24, 50, 92, 95},arr2[m]={1, 2, 6, 6, 8, 8, 11, 11, 12, 12, 13, 13, 14, 15, 16, 16, 17, 17, 17, 19, 21, 21, 22, 22, 24, 24, 25, 27, 29, 32, 33, 34, 35, 35, 35, 36, 38, 40, 41, 43, 44, 45, 46, 46, 47, 48, 50, 50, 50, 54, 54, 54, 54, 54, 57, 58, 60, 60, 61, 62, 67, 68, 69, 73, 73, 74, 75, 76, 78, 78, 79, 80, 81, 82, 82, 83, 83, 85, 86, 87, 87, 88, 88, 90, 91, 91, 92, 92, 92,      93, 95, 95, 95, 96, 97, 97, 98};
		//for(int i=0;i<n;i++)
		//	cin>>arr1[i];
		//for(int i=0;i<m;i++)
		//	cin>>arr2[i];
        cout<<"calling"<<endl;		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	//}
    return 0;
}  // } Driver Code Ends
