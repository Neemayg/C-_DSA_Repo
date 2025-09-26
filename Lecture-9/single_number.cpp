#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> nums={1,1,2,2,4};
int ans=0;
for(int val:nums){
  ans=ans^val;
}
cout<<ans<<endl;
return(0);
}