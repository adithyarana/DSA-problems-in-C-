# include <iostream>
# include<vector>
using namespace std;


vector<int> reverse(vector<int> v){
      int s=0;
      int e=v.size()-1;

      while (s<=e)
      {
        swap(v[s] , v[e]);
        s++;
        e--;
      }
      return v;

}

void print( vector<int> v) {

    for(int i=0 ;i<v.size() ;i++){
        cout<<v[i]<<" ";
       

    }
     cout<<endl;
}
      

int main(){


vector<int> v;

v.push_back(1);

v.push_back(4);

v.push_back(7);

v.push_back(5);

v.push_back(9);

vector<int> ans= reverse(v);

cout<<"the reverse of the array is "<<endl;
print(ans);

    return 0;
}