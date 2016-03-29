#include <bits/stdc++.h>
#define TAM 10000
using namespace std;

string hex(int num) {
	
	switch(num) {
		case 0 :
			return "0";
			break;
		case 1 :
			return "1";
			break;		
		case 2 :
			return "2";
			break;		
		case 3 :
			return "3";
			break;		
		case 4 :
			return "4";
			break;		
		case 5 :
			return "5";
			break;	
		case 6 :
			return "6";
			break;
		case 7 :
			return "7";
			break;		
		case 8 :
			return "8";
			break;		
		case 9 :
			return "9";
			break;
		case 10 :
			return "A";
			break;		
		case 11 :
			return "B";
			break;		
		case 12 :
			return "C";
			break;		
		case 13 :
			return "D";
			break;		
		case 14 :
			return "E";
			break;	
		case 15 :
			return "F";
			break;
	}

}

int dec(char num) {
	
	switch(num) {
	
		case '0':
			return 0;
			break;
		case '1':
			return 1;
			break;		
		case '2' :
			return 2;
			break;		
		case '3' :
			return 3;
			break;		
		case '4' :
			return 4;
			break;		
		case '5' :
			return 5;
			break;	
		case '6' :
			return 6;
			break;
		case '7' :
			return 7;
			break;		
		case '8' :
			return 8;
			break;		
		case '9' :
			return 9;
			break;
		case 'a' :
			return 10;
			break;		
		case 'b' :
			return 11;
			break;		
		case 'c' :
			return 12;
			break;		
		case 'd' :
			return 13;
			break;		
		case 'e' :
			return 14;
			break;	
		case 'f' :
			return 15;
			break;
	
	}

}

unsigned int bin_dec(string str2) {

	unsigned int size=str2.size()-1;
	unsigned int num=0;
	for(int i=0;i <= size; i++) {
		if(str2[size-i]=='1') {
			num+=pow(2,i);
		}
	}
	//cout<< num<< " dec" <<endl;
	return num;
}

string dec_bin(unsigned int num) {

	string strR;
	while(num>0) {
	
		unsigned int r2=num%2;
		if(r2==0)
			strR+='0';
		else
			strR+='1';
		num/=2;
	
	}
	string st;
	for(int i=strR.size()-1; i >= 0 ; i--) {
		st+=strR[i];		
	}
	return st;
}

string dec_hex(unsigned int num) {

	string strR;
	while(num>0) {
	
		unsigned int r2=num%16;
			strR+=hex(r2);
		num/=16;
	
	}
	string st;
	for(int i=strR.size()-1; i >= 0 ; i--) {
		st+=strR[i];		
	}
	return st;
}

unsigned int hex_dec(string str2) {

	unsigned int size=str2.size()-1;
	unsigned int num=0;
	for(int i=0;i <= size; i++) {		
			num+=(pow(16,i) * dec(str2[size-i]));		
	}
	return num;
}

int main() {
	
	string str2,s;
	unsigned int dc;
	while(cin>>str2) {
		if(str2=="-1")
			break;
		if(str2.size()>2 && str2[1]=='x'){
			s=str2.substr(2,str2.size());
			printf("%u\n",hex_dec(s));
		}else{
			dc = atoi(str2.c_str());
			cout <<"0x" << dec_hex(dc) << endl;
		}
		
	}
	

	return 0;

} 