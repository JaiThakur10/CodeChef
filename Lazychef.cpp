#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,m,d;
	    cin>>x>>m>>d;
	    if((x*m)==x+d){
	        cout<<x*m<<endl;
	    }
	    else{
	        cout<<min((x*m),(x+d))<<endl;
	    }
	}
	return 0;
}