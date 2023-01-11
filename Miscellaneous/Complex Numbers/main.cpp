#include <iostream>
using namespace std;
void solve(){
    string a,b;cin>>a>>b;
    int p=0,q=0;
    int r=0,s=0;
    bool flag=false;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]=='+' or a[i]=='-'){
            flag=true;
            continue;
        }
        if(flag==false){
            p+=a[i]-'0';
            p*=10;
        }
        else{
            r+=a[i]-'0';
            r*=10;
        }
    }
    p/=10,r/=10;
    for(int i=0;i<b.size()-1;i++){
        if(b[i]=='+' or b[i]=='-'){
            flag=false;
            continue;
        }
        if(flag==true){
            q+=b[i]-'0';
            q*=10;
        }
        else{
            s+=b[i]-'0';
            s*=10;
        }
    }
    q/=10,s/=10;
    string ans=to_string(p+q)+"+"+to_string(r+s)+"i";
    cout<<ans;
}
int main() {
    cout<<"Input 2 strings in format x+yi\n";
    solve();
    return 0;
}
//120+20i
//112+1i