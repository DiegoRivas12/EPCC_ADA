#include<iostream>
#include<vector>


using namespace std;
void printVectorElements(vector<int> &vec);
int pick_resume(vector<int>);
int main(){
    int lon=10;
    vector<int> resumes;
    for(int i=0;i<lon;i++){
        resumes.push_back(i+1);
    }
     //Complejidad O(nlogn)
    cout<<pick_resume(resumes)<<endl;

    return 0;
}
int pick_resume(vector<int> resumes){
    string eliminate = "top";
    vector<int> resumes1;

    printVectorElements(resumes);

    while(resumes.size()>1){//O(logn)
        if(eliminate=="top"){
            
            resumes1.resize(0);//limpiamos el vector intermediario
            for(int i=resumes.size()/2;i<=resumes.size()-1;i++){// O(n) Eliminamos de la mitad para arriba
                resumes1.push_back(resumes[i]);
            }
            resumes=resumes1;
            printVectorElements(resumes);
            eliminate="bottom";
        }
        else if(eliminate=="bottom"){
            
            resumes1.resize(0);//limpiamos el vector intermediario
            for(int i=0;i<=resumes.size()/2;i++){// O(n) Conservamos de la mitad para abajo
                resumes1.push_back(resumes[i]);
            }
            resumes=resumes1;
            printVectorElements(resumes);
            eliminate="top";
        }
    }
    return resumes[0];
}
void printVectorElements(vector<int> &vec)
{
    for (auto i = 0; i < vec.size(); ++i) {
        cout << vec.at(i) << "; ";
    }
    cout << endl;
}
/*

*/