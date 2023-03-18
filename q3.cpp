#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
void levelorder(Node* root){
    if(root==NULL) return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int x=q.size();
        for(int i=0;i<x;++i){
        Node* nd= q.front();
        q.pop();
        cout<<nd->data<<" ";
        if(nd->left!=NULL) q.push(nd->left);
        if(nd->right!=NULL) q.push(nd->right);
        }
        cout<<ln;
    }
}
int main()
{
 fast_cin();
 ll t;
 cin >> t;
 for(int it=1;it<=t;it++) {
    //Defining Binary Tree
    Node* root= new Node(10);
    root->left=new Node(30);
    root->right=new Node(40);
    root->left->left=new Node(50);
    root->left->right=new Node(20);
    root->right->right= new Node(90);
    levelorder(root);
    cout<<ln;
 }
 return 0;
}