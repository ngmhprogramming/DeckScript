#include <bits/stdc++.h>
using namespace std;

map<string, long long> nums;
string arg1, arg2;
int main(){
  freopen("vars.dks", "r", stdin);
  while(!cin.eof()){
    cin >> arg1;
    // Declaring an integer
    if(arg1 == "NUM"){
      cin >> arg1 >> arg2;
      nums[arg1] = stoll(arg2);
    }
  }
  /* See number variables
  for(map<string, long long>::iterator it = nums.begin(); it != nums.end(); it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }
  */
}
