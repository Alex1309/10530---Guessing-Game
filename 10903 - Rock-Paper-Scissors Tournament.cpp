//============================================================================
// Name        : 10903.cpp
// Author      : ALEX
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <iomanip>

int main() {
	int n,k;
	bool t = true;

	while(cin>>n)
		if(n==0)
			break;
		else{
			cin>>k;
			if (!t)
				cout<<endl;
			else
				t = false;
			float players[n];
			float same[n];
			float different[n];
			for(int i=0;i<n;i++){
				players[i]=0;
				same[i]=0;
				different[i]=0;
			}
			int p1,p2;
			string m1,m2;
			int x =(k*n*(n-1))/2;
			for(int i=0;i<x;i++){
				cin>>p1>>m1>>p2>>m2;
				if(m1=="rock" and m2=="paper"){
					players[p2-1]+=1;
					same[p1-1]+=1;
					different[p2-1]=1;
					different[p1-1]=1;
				}
				else if(m1=="rock" and m2=="scissors"){
					players[p1-1]+=1;
					same[p2-1]+=1;
					different[p2-1]=1;
					different[p1-1]=1;
				}
				else if(m1=="paper" and m2=="scissors"){
					players[p2-1]+=1;
					same[p1-1]+=1;
					different[p2-1]=1;
					different[p1-1]=1;
				}
				else if(m1=="paper" and m2=="rock"){
					players[p1-1]+=1;
					same[p2-1]+=1;
					different[p2-1]=1;
					different[p1-1]=1;
				}
				else if(m1=="scissors" and m2=="paper"){
					players[p1-1]+=1;
					same[p2-1]+=1;
					different[p2-1]=1;
					different[p1-1]=1;
				}
				else if(m1=="scissors" and m2=="rock"){
					players[p2-1]+=1;
					same[p1-1]+=1;
					different[p2-1]=1;
					different[p1-1]=1;
				}
			}
			for(int i=0;i<n;i++){
				float d=(float)(players[i]+same[i]);
				if(different[i]==0)
					cout<<"-"<<endl;
				else
					cout << setprecision (3) << fixed << (players[i])/(d)<<endl;
			}
		}
}
