#include <bits/stdc++.h>
using namespace std;

map<string, long long> ints;
map<string, bool> bools;
map<string, float> floats;
map<string, map<string, long long>> decks;
string argS, argS2, argS3;
long long argLL, argLL2;
float argF;
int main(){
  freopen("vars.dks", "r", stdin);
  while(!cin.eof()){
    cin >> argS;
    // Declaring an integer
    if(argS == "NUM"){
      cin >> argS >> argLL;
      ints[argS] = argLL;
    } else if(argS == "BOOL"){
      cin >> argS >> argLL;
      bools[argS] = argLL;
    } else if(argS == "FLOAT"){
      cin >> argS >> argF;
      floats[argS] = argF;
    } else if(argS == "DECK"){
      cin >> argS >> argS2;
      freopen(argS2.c_str(), "r", stdin);
      cin >> argLL;
      for(long long i = 0; i < argLL; i++){
        cin >> argS2 >> argLL2;
        decks[argS][argS2] = argLL2;
      }
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
  /* See float variables
  for(map<string, float>::iterator it = floats.begin(); it != floats.end(); it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }
  */
}
