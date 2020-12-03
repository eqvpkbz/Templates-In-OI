#include <cstdio> 

static inline int rd() {
    int res = 0; char c = getchar();
    while (c < 48 || c > 57) c = getchar();
    while (c >= 48 && c <= 57) res = res * 10 + c - 48, c = getchar();
    return res;
}

const int N = 1e6 + 5;
const int INF = 0x3f3f3f3f;

int n,m,cnt;
struct Query
{
	int x,y,k;
	int pos,type;
	Query(){}
	Query(int i,int j,int kk,int p,int t):x(i),y(j),k(kk),pos(p),type(t){}
}q[N],q1[N],q2[N];
int ans[N],c[N];
inline int lowbit(int x){return x&-x;}
inline void add(int x,int v)
{
	for(;x<=n;x+=lowbit(x)) c[x]+=v;
}
inline int sum(int x)
{
	int res=0;
	for(;x;x-=lowbit(x)) res+=c[x];
	return res;
}
void solve(int l,int r,int ql,int qr)
{
	if(l>r||ql>qr) return;
    printf("solving %d %d %d %d\n", l, r, ql, qr);
    for(int i = ql; i <= qr; ++ i)
            printf("%d [%d, %d] %d %d\n", q[i].type, q[i].x, q[i].y, q[i].pos, q[i].k); 
	if(l==r)
	{
		for(int i=ql;i<=qr;i++)
			if(q[i].type) ans[q[i].pos]=l;
		return;
	}
	int cnt1=0,cnt2=0;
	int mid=(l+r)>>1;
	for(int i=ql;i<=qr;i++)
		if(q[i].type)
		{
			int tmp=sum(q[i].y)-sum(q[i].x-1);
			if(q[i].k<=tmp) q1[++cnt1]=q[i];
			else q[i].k-=tmp,q2[++cnt2]=q[i];
		}
		else
		{
			if(q[i].x<=mid) add(q[i].pos,q[i].k),q1[++cnt1]=q[i];
			else q2[++cnt2]=q[i];
		}
	for(int i=1;i<=cnt1;i++)
		if(q1[i].type==0) add(q1[i].pos,-q1[i].k); // Undo
	for(int i=1;i<=cnt1;i++) q[ql+i-1]=q1[i];
	for(int i=1;i<=cnt2;i++) q[ql+cnt1+i-1]=q2[i];
	solve(l,mid,ql,ql+cnt1-1);
	solve(mid+1,r,ql+cnt1,qr);
}
int a[N];
int main()
{
	n=rd(),m=rd();
	for(int i=1;i<=n;i++) {
		a[i]=rd();
		q[++cnt]=Query(a[i],0,1,i,0);
	}
	int tot=0;
	for(int i=1;i<=m;i++)
	{
		char ch=getchar();while(ch!='Q'&&ch!='C')ch=getchar();
		int x=rd(),y=rd(),z;
		if(ch=='C') q[++cnt]=Query(a[x],0,-1,x,0),q[++cnt]=Query(a[x]=y,0,1,x,0);
		else z=rd(),q[++cnt]=Query(x,y,z,++tot,1);
	} solve(-INF,INF,1,cnt);
	for(int i=1;i<=tot;i++)
		printf("%d\n", ans[i]);
	return 0;
}
/*
5 3
1 2 4 5 6
Q 1 4 2
C 1 3
Q 1 4 2
*/