#include <iostream>
using namespace std;
#include <vector>

int main() {
    int n;
    do{
        cout<<"quanti studenti ci sono?"<<endl;
        cin>>n;
    }while(n<=0);
    string nomi[n];
    double voti[n];
    int i;
    i=0;
    while(i<n){
        cout<<"insrisci il"<<i+1<<"nome"<<endl;
        cin>>nomi[i];
        cout<<"inserisci il"<<i+1<<"voto"<<endl;
        cin>>voti[i];
        i=i+1;
       }
       i=0;
       while(i<n){
        cout<<"il"<<i+1<<"nome è"<<nomi[i]<<"il"<<i+1<<"voto è"<<voti[i]<<endl;
        i=i+1;
        }
        float max;
        int imax;
        i=0;
        max=voti[i];
        imax=i;
        while(i<n){
            if(voti[i]>max){
                max=voti[i];
                imax=i;
               }
               i=i+1;
           }
           cout<<"il voto più alto è"<<voti[imax]<<endl;
           cout<<"il nome dell'alunno con il voto più alto è"<<nomi[imax]<<endl;


    
}


