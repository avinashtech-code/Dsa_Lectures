#include <iostream>
using namespace std ;

int main() {
int m ,n ;
cout<<"enter the number " ;
cin>>m>>n ;
for(int i=1 ;i<=m;i++) {
    for(int j=1;j<=n;j++) {
    if(i==m||j==n||i==1||j==1)    { cout<<"* "; }
    else {cout<<"  " ; }
    }
    cout<<endl ;
}

return 0 ;
}
