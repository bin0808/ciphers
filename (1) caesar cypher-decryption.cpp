#include<bits/stdc++.h>
using namespace std;
main(){string s;
	   int key;
	cout<<"enter the encrypted and the key"<<endl;
	cin>>s>>key;
	int x=s.size();
	key=key%('z'-'a'+1);
	for(int i=0;i<x;i++){
		if(s[i]>='a'&&s[i]<='z'){
		s[i]=s[i]-key-'a'+26;
		
			        s[i]=s[i]%('z'-'a'+1);
			s[i]=s[i]+'a';}
		
		else if(s[i]>='A'&&s[i]<='Z'){
		s[i]=s[i]-key-'A'+26;
		
		             s[i]=s[i]%('Z'-'A'+1);
			s[i]=s[i]+'A';}
		
	}
     cout<<"decrypted text is "<<s;
}