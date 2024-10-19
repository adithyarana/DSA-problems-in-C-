# include<iostream>
# include<map>
# include<unordered_map>
using namespace std;


int main(){


// creating  the map

unordered_map<string ,int> m;

// inserting  in map 

pair<string , int> p= make_pair("adithya" , 3);
m.insert(p);

// inserting type 2 

pair<string , int> pair2  ("rana" , 2);
m.insert(pair2);

// inserting type 3 

m["mera"]=1;

// serach in the map 

cout<< m["mera"] <<endl;
cout<<m.at("adithya") <<endl;

// serach for the type three it will give 0; if  the key is not decalared in thr map

cout<<m["ubkown"]<<endl;
cout<<m.at("ubkown") <<endl;

// size 

cout<<m.size()<<endl;

// cheeak the presence 

cout<<m.count("rana")<<endl;

// erase 
m.erase("rana");
cout<<m.size()<<endl;

// iterator way to print all map toeather 

unordered_map<string , int> :: iterator it=m.begin();

while(it != m.end()){

    cout<< it-> first << " "<<it->second <<endl;
    it++;
}



    return 0;
}