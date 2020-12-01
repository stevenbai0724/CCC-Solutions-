#include <bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    bool TroyMartian = false;
    bool VladSaturnian = false;
    bool GraemeMercurian =false;
    int a, e;
    cin>>a>>e;

    if(a>=3 && e<=4) TroyMartian = true;
    if(a<=6 && e>=2) VladSaturnian = true;
    if(a<=2 && e<=3) GraemeMercurian = true;

    if(!TroyMartian && !VladSaturnian  &&!GraemeMercurian) return 0;
    
    if(TroyMartian) cout<<"TroyMartian"<<"\n";
    if(VladSaturnian) cout<<"VladSaturnian"<<"\n";
    if(GraemeMercurian) cout<<"GraemeMercurian"<<"\n";
    return 0;
}