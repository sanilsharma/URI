#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
 if(a > b && b <= c)cout<<":)"<<endl;
		else if(a < b && b >= c) cout<<":(";
		else if(a < b && b < c && (c - b) < (b - a)) cout<<":("<<endl;
		else if(a < b && b < c && (c - b) >= (b - a))cout<<":)"<<endl;
		else if(a > b && b > c && (c - b) > (b - a)) cout<<":)"<<endl;
		else if(a > b && b > c && (c - b) <= (b - a))cout<<":("<<endl;
		else if(a == b && b < c)cout<<":)"<<endl;
		else cout<<":("<<endl;
		return 0;
}
