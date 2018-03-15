#include<bits/stdc++.h>
using namespace std;
main(){string s;
	   int key;
	cout<<"enter the string and the key"<<endl;
	cin>>s>>key;
	key=key%('z'-'a'+1);
	int x=s.size();
	for(int i=0;i<x;i++){
		if(s[i]>='a'&&s[i]<='z'){
		s[i]=s[i]+key-'a';
		
			         s[i]=s[i]%('z'-'a'+1);
			s[i]=s[i]+'a';
		}
		else if(s[i]>='A'&&s[i]<='Z'){
		s[i]=s[i]+key-'A';
		
		       s[i]=s[i]%('Z'-'A'+1);
			s[i]=s[i]+'A';
		}
	}
     cout<<"encrypted text is "<<s;
}
