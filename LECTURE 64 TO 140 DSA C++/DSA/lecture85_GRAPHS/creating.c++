# include<iostream>
# include<unordered_map>
# include<list>
using namespace std;

// creating the graph functiotn

class graph{

public:
unordered_map<int , list<int> > adj;


// this is the function for add edges 
   void addedges(int u , int v, bool direction){

     // direction =0 -> undirected graph 
     // direction =1 -> directed graph

     // create a adj from u to v 

     adj[u].push_back(v);

     if(direction==0){
        adj[v].push_back(u);
     }
   }

   // thiss is the function for print adjecnts 

   void printadjlist(){

     for(auto i:adj){
        cout<<i.first<<"->";

        for(auto j: i.second){
            cout<<j<<" , ";
        }
        cout<<endl;
     }
     
   }


};

int main(){

int n;

cout<<"enter the number of nodes "<<endl;
cin>>n;

int m;
cout<<"enter the number if edges "<<endl;
cin>>m;

graph g;

for(int i=0;i<m ;i++){
    int u, v;
    cin>>u>>v;

    // creating an undirected graph
    g.addedges(u, v, 0);
}
// printing graph

g.printadjlist();


    return 0;
}