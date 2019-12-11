#include<stdio.h>
int ta[100010],nt[200010],to[200010],co[200010];
//無向グラフ
void mkls(int v,int e,int *a,int *b,int *c){
  int i;
  for(i=0;i<=v;i++)ta[i]=-1;
  for(i=0;i<e;i++){
    nt[i  ]=ta[to[i+e]=a[i]];
    nt[i+e]=ta[to[i  ]=b[i]];
    co[ta[b[i]]=i+e]=co[ta[a[i]]=i]=c[i];
  }
}
int main(){
  int n,i,r,t,a[100010],b[100010],c[100010],q[100010],d[100010]={1,1};
  scanf("%d",&n);
  for(i=0;i<n-1;i++){
    scanf("%d %d %d",&a[i],&b[i],&c[i]);
    c[i]%=2;
  }
  mkls(n,n-1,a,b,c);
  q[t=0]=1;
  for(r=1;r-t;t++){
    for(i=ta[q[t]];i+1;i=nt[i]){
      if(d[to[i]])continue;
      d[q[r++]=to[i]]=(d[q[t]]+co[i])%2+2;
    }
  }
  //for(i=0;i<n;i++)printf("%d ",d[i+1]);printf("\n");
  for(i=0;i<n;i++)printf("%d\n",d[i+1]%2);
  return 0;
}
