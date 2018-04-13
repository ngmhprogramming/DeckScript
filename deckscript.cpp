#include <bits/stdc++.h>
using namespace std;

map<string, long long> ints;
map<string, bool> bools;
map<string, float> floats;
string arg1, arg2;
int main(){
  freopen("vars.dks", "r", stdin);
  while(!cin.eof()){
    cin >> arg1;
    // Declaring an integer
    if(arg1 == "NUM"){
      cin >> arg1 >> arg2;
      ints[arg1] = stoll(arg2);
    } else if(arg1 == "BOOL"){
      cin >> arg1 >> arg2;
      bools[arg1] = stoi(arg2);
    } else if(arg1 == "FLOAT"){
      cin >> arg1 >> arg2;
      floats[arg1] = stof(arg2);
    }
  }
  /* See number variables
  for(map<string, long long>::iterator it = ints.begin(); it != ints.end(); it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }
  */
  /* See boolean variables
  for(map<string, bool>::iterator it = bools.begin(); it != bools.end(); it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }
  */
  // See float variables
  for(map<string, float>::iterator it = floats.begin(); it != floats.end(); it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }
  //
}
