///Pair STL Container
///BY Ahmed Arafat
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
/*
Pair : it's used to insert to values in one container

Pair <First_Element,Second_Element>
------------------------
.first
.second
*/
int main()
{

    ///Declare pair
    //pair<string,ll> p;

    ///Intialize pair
    //pair<string,ll> p("Ahmed",20); //Constructor
    //pair<string,ll> p = make_pair("Ahmed",20);
    //pair<string,ll> p = {"Ahmed",20};

    ///insert element at end
    //pair<string,ll> p;
    //p.first = "Ahmed";
    //p.second = 20;

    ///Create Pair INSIDE Pair
    //pair<string, pair<string,ll>> p;
    //p.first = "Ahmed";
    //p.second.first = "bis";
    //p.second.second = 20;

    ///Create THREE Pairs inside each other
    //pair<string, pair<pair<string,ll>,ll> > p;
    //p.first = "Ahmed";
    //p.second.first.first = "bis";
    //p.second.first.second = 20;
    //p.second.second = 20;

    ///Create Pair INSIDE Vector
    //vector<pair<string,ll>> vp;

    ///Insert Pair's value INSIDE Vector
    //vp.push_back({"Ahmed",20});
    //vp.push_back(make_pair("Ahmed",20));
    //vp.push_back(pair<string,ll>("Ahmed",20));
    //pair<string,ll> p = {"Ahmed",20};
    //vp.push_back(p);

    ///Access Pair's values INSIDE Vector
    //cout<<vp[0].first<<" "<<vp[0].second;
    //vector<pair<string,ll>>::iterator it;
    //for(it =vp.begin();it != vp.end(); it++)
        //cout<<(*it).first<<" "<<(*it).second; //First Access Method
       //cout<<it->first<<" "<<it->second; //Second Access Method (Easer)
}