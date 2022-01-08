#include <iostream>
#include<bits/stdc++.h>
// #include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
	std::vector<int> arr {2, 3, 4, 5, 6, 1};
	int low=0, high= arr.size()-1;
	while(low<=high){
		int mid = (high+low)/2;
		if(arr[mid]<arr[mid-1] && (arr[mid]<arr[mid+1])) 
			std::cout<< arr[mid]<<" = mid\n";
		if(arr[mid]<arr[high]){
			high=mid-1;
		}
		else{
			low= mid+1;
		}
	}
	std::cout<<"low = "<<low;
	return 0;
	// std::map<int,int> mp; int count=0;
	// // wh	

	// std::cout<<"res: "<<res<<std::endl;
	// for(auto i : mp){
 //        if(i.second % 2 != 0)
 //            std::cout<< i.first<<std::endl;
 //    }
	// return 0;
}