#include <iostream>
#include<bits/stdc++.h>
// #include<bits/stdc++.h>
int main(int argc, char const *argv[])
{
	std::vector<int> arr {1, 2, 3, 2, 3, 1, 3};
	std::map<int,int> mp; int count=0;
	int res=0;
	for(int i=0;i<arr.size();i++){
		// res = res^arr[i];
		count= mp[arr[i]];
		mp[arr[i]] = ++count;
		// mp[arr[i]]++ ; /*= count*/
	}
	std::cout<<"res: "<<res<<std::endl;
	for(auto i : mp){
        if(i.second % 2 != 0)
            std::cout<< i.first<<std::endl;
    }
	return 0;
}