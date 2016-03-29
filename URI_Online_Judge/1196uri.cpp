#include <bits/stdc++.h>

using namespace std;
char dec(char c) {
	switch(c) {
		case '=': return '-';
		case '-': return '0';
		case '0': return '9';
		case '9': return '8';
		case '8': return '7';
		case '7': return '6';
		case '6': return '5';
		case '5': return '4';
		case '4': return '3';
		case '3': return '2';
		case '2': return '1';
		case '1': return '`';
		case '\\': return ']';
		case ']': return '[';
		case '[': return 'P';
		case 'P': return 'O';
		case 'O': return 'I';
		case 'I': return 'U';
		case 'U': return 'Y';
		case 'Y': return 'T';
		case 'T': return 'R';
		case 'R': return 'E';
		case 'E': return 'W';
		case 'W': return 'Q';
		case '\'': return ';';
		case ';': return 'L';
		case 'L': return 'K';
		case 'K': return 'J';
		case 'J': return 'H';
		case 'H': return 'G';
		case 'G': return 'F';
		case 'F': return 'D';
		case 'D': return 'S';
		case 'S': return 'A';
		case '/': return '.';
		case '.': return ',';
		case ',': return 'M';
		case 'M': return 'N';
		case 'N': return 'B';
		case 'B': return 'V';
		case 'V': return 'C';
		case 'C': return 'X';
		case 'X': return 'Z';	
	}

}

int main() {

	string s;
	
	while(getline(cin,s) && !cin.eof()) {
		for(int i=0;i<s.size();i++) {
			if(s[i]!=' ')
				printf("%c",dec(s[i]));
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}
