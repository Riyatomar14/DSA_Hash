#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    //creation
    unordered_map<string,int> m; //string datatype of key and int datatype of value corresspond to it.
    
    //insertion
    
    //1
    pair<string,int> p = make_pair("riya",3);
    m.insert(p);
    
    //2
    pair<string,int> pair2("tomar",2);
    m.insert(pair2);
    
    //3
    m["my"]=1;
    
    //search
    cout<<m["my"]<<endl;
    cout<<m.at("riya")<<endl;
 
    //cout<<m.at("net") << endl; // which is not created give result unordered_map
    
    //but call another way it created and give it a value 0.
    cout << m["net"] << endl;
    //now i call key "net" from the previous it give 0 as it created 
    cout<<m.at("net") << endl;
    
    //size
    cout<<m.size()<<endl;
    
    //to check the presence 
    cout<< m.count("tom")<<endl; //absent - count give 0
    cout<< m.count("tomar")<<endl;//present - count give 1 or no. it present
    
    //erase
    m.erase("tomar");
    cout<<m.size()<<endl;
    cout<<m.count("tomar")<<endl;
    
    //
    for(auto i:m){
        cout << i.first << " " << i.second << endl;
    }
    
    return 0;
    
}
