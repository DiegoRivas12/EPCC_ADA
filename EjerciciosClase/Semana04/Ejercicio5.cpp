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

    cout<<pick_resume(resumes)<<endl;

    return 0;
}
int pick_resume(vector<int> resumes){
    string eliminate = "top";
    while(resumes.size()>1){
        if(eliminate=="top"){
            resumes.resize(resumes.size()-resumes.size()/2);//Eliminamos de la mitad para arriba
            printVectorElements(resumes);
            eliminate="bottom";
        }
        else if(eliminate=="bottom"){
            resumes.erase(resumes.begin() + resumes.size()/2, resumes.end());//Conservamos de la mitad para abajo
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