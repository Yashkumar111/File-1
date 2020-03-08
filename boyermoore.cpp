#include <bits/stdc++.h>
using namespace std;
int main()
{
	char pat[100],text[1000];
	int lp,lt,m,n,i;
	scanf("%s",pat);
	scanf("%s",text);
	lp=strlen(pat);
	lt=strlen(text);
	int a[26];
	for(i=0;i<26;i++)
		a[i]=lp;
	for(i=0;i<lp-1;i++)
	{
		a[pat[i]-'a']=lp-i-1;
	}
	int val,k;
  for(i=lp-1;i<lt;i++)
  {
  	val=a[text[i]-'a'];
  	k=i;
  	int count=0,t=lp-1;
  	while(pat[t]==text[k]&&t>=0)
  	{
  		k--;
  		t--;
  		count++;
  	}
  	if(count!=lp)
  		i=i+val-1;
  	else
  		cout<<"found at "<<i-lp+1<<endl;
  }
}
abcde
01234
43215
fkbcdegabcde
abcde
 abcde
      abcde
       abcde
