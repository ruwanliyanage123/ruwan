#include <iostream>

using namespace std;

char ar[256];
void calculateLast(string p){

    int le=p.length();
    int i;
    for(i=0;i<256;i++){
        ar[i]=-1;
    }
    for(i=le-1;i!=0;i--){
        if(ar[p[i]] == -1)
            ar[p[i]] = i;

    }

}

int last(char k){
    return ar[k];
}

void boyarMoore(string t,string p){
    calculateLast(p);
    int n=t.length();
    int m=p.length();
    int s=0;
    int i;
    while(s<n-m+1){
        bool isTrue=true;
        for(i=m-1;i>=0;i--){
            if(t[s+i] != p[i]){
                isTrue=false;
                int l=last(p[i]);
                if(l<i){
                    s+=i-l;
                }
                else
                    s+=1;
                break;
            }

        }
        if(isTrue){
            cout << "String match at shift : " << s << endl;
            s+=1;
        }
    }
}

int main()
{
    boyarMoore("aadfdasdafdasdfdas","fsdfs");
    return 0;
}
