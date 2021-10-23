#include <bits/stdc++.h>
using namespace std;

const int maxn=1e6+5;

int N,len,L;
char txt[maxn],ms[maxn];

int find() {
    int Ans=0;
    L=strlen(ms+1);
    for (int i=1; i+L-1<=len; ++i) {
        bool flg=1;
        for (int j=1; j<=L; ++j) if (txt[i+j-1]!=ms[j]) {flg=0;break;}
        Ans+=flg;
    }
    return Ans;
}

int main() {
    scanf("%d\n%s",&N,txt+1),len=strlen(txt+1);
    for (int i=1; i<=N; ++i) {
        scanf("%s",ms+1);
        printf("%d\n",find());
    }
    return 0;
}
