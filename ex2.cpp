#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void showlist(list<int>&lst){
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++)
        cout<<"\t"<<*it;
    cout<<"\n";
}
void tribulles(list<int>&lst){
    list<int>::iterator it1;
    for(it1=lst.begin();it1!=lst.end();it1++){
        list<int>::iterator it2;
        for(it2=lst.begin();it2!=prev(lst.end());it2++){
            if(*it2>*next(it2)){
                iter_swap(it2, next(it2));
            }
        }
    }
}
void triparselection(list<int>&lst){
    list<int>::iterator it1;
    for(it1=lst.begin();it1!=lst.end();it1++){
        list<int>::iterator minelement=it1;
        for(it1=next(it1);it1!=lst.end();it1++){
            if(*it1<*minelement){
                minelement=it1;
            }
        }
        iter_swap(it1, minelement);
    }
}
void triparinsertion(list<int>&lst){
    list<int>::iterator it1;
    for(it1=next(lst.begin());it1!=lst.end();it1++){
        int b=*it1;
        list<int>::iterator it2=prev(it1);
        while (it2!=lst.begin()&&*prev(it2)>b) {
            *it2=*prev(it2);
            it2--;
        }
        *it2=b;
    }
}
int main(){
    list<int> numberes;
    int n,val;
    cout<<"entrez la valeurs des entieres que vou voulez trier ";
    cin>>n;
    cout<<"etrez les  "<<n<<"   nombres que vou souhaitez :\n"<<endl;
    for(int i=0;i<n;i++){
        cin>>val;
        numberes.push_back(val);
    }
    cout<<"les val que vous avez entrez sont : ";
    showlist(numberes);
    
    list<int>numberestribulles =numberes;
    tribulles(numberestribulles);
    cout << "Liste triée par bulles : ";
    showlist(numberestribulles);
    
    list<int>numberestriparselection=numberes;
    triparselection(numberestriparselection);
    cout<<"liste triéé par selection";
    showlist(numberestriparselection);
    
    list<int>numberestriparinsertion=numberes;
    triparinsertion(numberestriparinsertion );
    cout<<"triee par insertion";
    showlist(numberestriparinsertion);
    return 0;
}
