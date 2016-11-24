#include <iostream>
#include <string>
#include <vector>
using namespace std;
struct city{
    string name;
    int happiness;
};

int N,K;
vector<city> cities;
vector<vector<int> > Mgraph;
vector<int> path;
string startCity;
void solve(int vertex){
    if(vertex == 0){
        return;
    }
    int index;
    for(int i = 0; i<Mgraph[vertex].size();i++){
       if(i!=vertex&&Mgraph[vertex][i]>0){
          index = i; 
          break;
       }
    }


}

int main(){
    city startCity;

    cin>>N>>K>>startCity.name;
    cities.resize(N);
    cities.push_back(startCity);

    for(int i= 1;i<N;i++){
       cin>>cities[i].name>>cities[i].happiness;
    }
    for(int i = 0;i<K;i++){
       string c1,c2;
       int cost,index1,index2;
       cin>>c1>>c2>>cost; 
       for(int j = 0;j<N;j++){
           if(c1==cities[j].name){
               index1 = j;
           }
           if(c2==cities[j].name){
               index2 = j;
           }
    }
    Mgraph[index1][index2] = cost;  
    }



}

